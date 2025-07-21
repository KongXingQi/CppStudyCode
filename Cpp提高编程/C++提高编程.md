# C++ 提高编程

- 本阶段主要针对C++<mark>泛型编程</mark>>和<mark>STL</mark>技术的讲解。



## 1. 模板

### 1.1 模板的概念

生活中的模板：一寸照片模板，ppt模板，还有求职过程中的简历模板，这可以帮我们在生活中方便很多，C++也是如此。

模板的特点:

- 模板不可以直接使用，他只是一个框架
- 模板的通用并不是万能的

### 1.2 函数模板

在c++中除了所学过的面向对象的思想之外

- 还有另一种编程思想称为<mark>泛型编程</mark>,主要利用的技术就是模板。
- c++提供两种模板机制：函数模板和类模板

#### 1.2.1 函数模板语法

建立一个通用函数，其返回值和星形参类型不确定，用一个虚拟的类型来代表。

**语法：**

```cpp
template<typename T>
函数声明和定义
```

`template ` 声明创建模板

`typename` 表示其后面的符号是一种数据类型，也可以用`class`

`T` 通用的数据类型，名称可换，一般大写。 

![image-20250720095105664](http://szn0n3z42.hb-bkt.clouddn.com/image-20250720095105664.png)

上图所示：我们如果交换的数据类型不止是一个，那按照以前的做法，就得实现两个函数来交换，但是这种模板的思想，我们只需要写一个就好了，而在调用的时候，有两种方式：

- 自动类型推导：编译器自己推导什么类型
- 显示指定类型：我们告诉编译器什么类型

#### 1.2.2 函数模板注意事项 

- 自动类型推导，必须推导出<mark>一致</mark>的数据类型T,才可以使用
- 模板必须要确定出T的数据类型，才可以使用

![image-20250720101839752](http://szn0n3z42.hb-bkt.clouddn.com/image-20250720101839752.png)

#### 1.2.3 函数模板案例

写了一个选择排序。

```cpp
#include <iostream>

using namespace std;



template<typename T>
void mySwap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


template<typename T>
void mySort(T &arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int maxIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[maxIndex])
				maxIndex = j;
		}

		mySwap(arr[i], arr[maxIndex]);
	}
}

void test01()
{
	int arr[] = { 1,200,30,400,50 };
	//char arr[] = "pkshdas";
	int k = sizeof(arr) / sizeof(arr[1]);
	mySort(arr, k);

	for (int i = 0; i < k; i++)
		cout << arr[i] << " ";
	
}

int main()
{
	
	test01();
	return 0;
}
```

#### 1.2.4 普通函数和函数模板的区别

- 普通函数调用可以发生隐式类型转换
- 函数模板用自动类型推导，不可以发生隐士类型转化。
- 函数模板用显示指定类型，可以发生隐式类型转化。

![image-20250720112529193](http://szn0n3z42.hb-bkt.clouddn.com/image-20250720112529193.png)

上图中当普通函数调用的时候，会自动将`char`类型转化成`int`类型，`10 + 97 = 107`,而模板函数中的自动类型推导则不会自动转化。

对于显示类型指定，我感觉`<int>`就是将上述函数模板中`T`全部编程了`int`,所以他会和普通函数一样，进行隐式转换。

**建议使用显示指定类型的方式，调用函数模板，因为可以自己确定通用类型T。**

#### 1.2.5 普通函数与函数模板调用规则

普通函数与函数模板是可以发生重载的。

调用规则：

1. 如果普通函数和函数模板都实现，优先调用普通函数。
2. 可以通过空模板参数列表来强制调用函数模板
3. 函数模板也可以发生重载
4. 如果函数模板可以产生更好的匹配，优先调用函数模板。



```cpp
#include <iostream>

using namespace std;



void myPrintf(int a, int b)
{
	cout << "普通函数的调用!" << endl;
}

template<typename T>
void myPrintf(T a, T b)
{
	cout << "函数模板的调用!" << endl;
}

template<typename T>
void myPrintf(T a, T b, T c)
{
	cout << "函数模板重载的调用!" << endl;
}


//1.如果普通函数和函数模板都实现，优先调用普通函数。
void test01()
{
	int a = 0, b = 0;
	myPrintf(a, b); 
}


//2. 可以通过空模板参数列表来强制调用函数模板
//3. 函数模板也可以发生重载
void test02()
{
	int a = 0, b = 0;
	myPrintf<>(a, b);

	myPrintf<>(a, b, 10);
}


//4.如果函数模板可以产生更好的匹配，优先调用函数模板
//因为如果调用普通函数是需要进行隐式类型转换的。 
void test04()
{
	char c1 = 'a', c2 = 'b';

	myPrintf(c1, c2);
}

int main()
{
	//test01();
	//test02();
	test04();
	return 0;
}
```

总结: 既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性。

#### 1.2.6 模板的局限性

模板的通用性并不是万能的，碰上自定义数据类型，一一般的模板就会出错了。

```cpp
template<typename T>
bool myCompare(T a, T b)
{
	return a == b;
}


void test01()
{
	int a = 10, b = 20;
	char c1 = 'a', c2 = 'a';

	if (myCompare(a, b))
		cout << "a = b" << endl;
	else
		cout << "a != b" << endl;

	if (myCompare(c1, c2))
		cout << "c1 = c2" << endl;
	else
		cout << "c1 != c2" << endl;

}
```

这种比较是可以的，但是下面的比较就不行了。

```cpp
void test02()
{
	Person p1("kxq", 18);
	Person p2("kxq", 18);


	if (myCompare(p1, p2))
		cout << "p1 = p2" << endl;
	else
		cout << "p1 != p2" << endl;
}
```

我们可以用之前所学的将`==`重载，但如果还要比较大于小于等等其他情况，需要重载的太多了，不太方便。

所以需要添加一个具体化的模板，就可以解决自定义类型的通用化了。

```cpp
//----------------------------------------
template<> bool myCompare(Person a, Person b)
{
	return a.name == b.name && a.age == b.age;
}
//----------------------------------------

void test02()
{
	Person p1("kxq", 18);
	Person p2("kxq", 21);


	if (myCompare(p1, p2))
		cout << "p1 = p2" << endl;
	else
		cout << "p1 != p2" << endl;
}

```



### 1.3 类模板

#### 1.3.1 类模板的语法

类模板的作用:

- 建立一个通用类，类中成员数据类型可以不具体制定，用一个虚拟的类型来代表。

建立一个通用函数，其返回值和星形参类型不确定，用一个虚拟的类型来代表。

**语法：**

```cpp
template<typename T>
类
```

`template ` 声明创建模板

`typename` 表示其后面的符号是一种数据类型，也可以用`class`

`T` 通用的数据类型，名称可换，一般大写。 

- 类模板和函数模板十分像，只是在`template`下一行写成类就好了，示例如下:

```cpp
#include <iostream>
#include <string>

using namespace std;

//类模板
template<class NameType, class AgeType>	//可以写多个
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "姓名: " << this->m_Name << " 年龄: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};


void test01()
{
	Person<string, int> p1("kxq", 18);
	p1.showPerson();
}


int main()
{
	test01();
	return 0;
}
```

#### 1.3.2 类模板与函数模板的区别

- 类模板没有自动类型推导的使用方式

```cpp
//1. 类模板没有自动类型推导使用方式
void test01()
{
	//这是错误的，编译器不能够自动推导。
	Person p1("xl", 18);

	//只有这一种方式可以。
	Person<string, int> p1("kxq", 18);
	p1.showPerson();
}


int main()
{
	test01();
	return 0;
}
```

- 类模板在模板参数列表中可以有默认参数

![image-20250720155940811](http://szn0n3z42.hb-bkt.clouddn.com/image-20250720155940811.png)

就是说我要是在模板参数列表中有了默认参数，在下面使用时候只需要写出另一个即可。

#### 1.3.3 类模板成员函数创建时机。

- 类模板成员函数在调用时才创建

```cpp
#include <iostream>

//类模板成员函数创建时机
//类模板成员函数在调用时才创建

using namespace std;


class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}

};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}

};
template<class T>
class MyClass
{
public:
	T obj;

	//类模板中的成员函数
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}
};


void test01()
{
	MyClass<Person1> m;
	m.fun1();
	//m.fun2();	//错误。


	MyClass<Person2> mm;
	//mm.fun1();//错误。
	mm.fun2();
}


int main()
{
	test01();
	return 0;
}
```

- 类模板成员函数并不是一开始就创建的，在调用时才去创建。

#### 1.3.4 类模板对象做函数参数

学习：类模板实例化出对象，向函数传参的方式

一共有三种传入方式：

- 指定传入的类型 --- 直接显示对象的数据类型
- 参数模板化 --- 将对象中的参数变为模板进行传递
- 整个类模板化 --- 将这个对象类型 模板化进行传递

![image-20250720170349751](http://szn0n3z42.hb-bkt.clouddn.com/image-20250720170349751.png)

代码示例:

```cpp
#include <iostream>

using namespace std;



template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "姓名: " << this->m_Name << " 年龄: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1. 指定传入的类型
void printfPerson1(Person<string, int> &p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int> p("xl", 18);
	printfPerson1(p);
}
//2. 参数模板化
template<class T1, class T2>
void printfPerson2(Person<T1, T2> &p)
{
	p.showPerson();
	cout << "T1 类型: " << typeid(T1).name() << endl;
	cout << "T2 类型: " << typeid(T2).name() << endl;

}
void test02()
{
	Person<string, int> p("N9", 21);
	printfPerson2(p);
	
}
//3. 整个类模板化
template<class T>
void printfPerson3(T p)
{
	p.showPerson();
	cout << "T 类型: " << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p("DBQ", 21);
	printfPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();
	return 0;
}
```

#### 1.3.5 类模板与继承

当类模板碰上继承时，需要注意以下几点：

- 当子类继承的父类是一个类模板是，子类在声明的时候，要指定出父类中T的类型
- 如果不指定，编译器无法给予子类分配内存
- 如果想灵活指定出父类中T的类型，子类也需要变为类模板

下图 当我们的父类是一个类模板的时候，正常的方式肯定是不可以的，需要在Base后面写出参数列表。

![image-20250721084944821](http://szn0n3z42.hb-bkt.clouddn.com/image-20250721084944821.png)

```cpp
template<class T>
class Base
{
public:

	T m_A;
};

//1. 当子类继承的父类是一个类模板是，子类在声明的时候，要指定出父类中T的类型
class Son1 :public Base<int>
{

};

//2. 如果想灵活指定出父类中T的类型，子类也需要变为类模板
template<class T1, class T2>
class Son2 :public Base<T2>
{
public:

	T1 m_A;
};
```

总结： 如果父类是类模板，子类需要指定出父类中T的数据类型

#### 1.3.6 类模板成员函数类外实现

- 类模板中成员函数类外实现时，需要加上模板参数列表

![image-20250721092932881](http://szn0n3z42.hb-bkt.clouddn.com/image-20250721092932881.png)

代码示例:

```cpp
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名: " << this->m_Name << " 年龄: " << this->m_Age << endl;
}


void test01()
{
	Person<string, int> p("xl", 18);
	p.showPerson();
}
```

#### 1.3.7 类模板分文件编写

 因为在`1.3.3类模板创建时机`中学过，**类模板成员函数在调用时才创建** 所以他和普通的类函数份文件编写不一样。

- 普通的类函数份文件编写只需要保护其`.h`文件就好了，而类模板则需要包含类模板函数具体实现的`.cpp`文件，这是第一种解决方式。
- 第二种解决方式是将` .h`文件和`.cpp`文件写在一起，改为后缀为`.hpp`的文件



主流的解决方法是第二种解决方法，将类模板成员函数写到一起，并改后缀为`.hpp`

#### 1.3.8 类模板与友元

额。。。。。全局函数类内实现简单加个`friend`就好了。

额。。。。。全局函数类外实现。。。。。。。先让编译器知道有这个函数，但是知道这个函数前又必须让编译器知道那个`Person`类,因为函数中用到了`Person`类了。

套娃这一块./ 

左脚踩右脚这一块./

![image-20250721110951300](http://szn0n3z42.hb-bkt.clouddn.com/image-20250721110951300.png)

```cpp
#include <iostream>
#include <string>

using namespace std;

//让下面的知道Person
template<class T1, class T2>
class Person;

//全局函数 类外实现
template<class T1, class T2>
void printfPerson2(Person<T1, T2> p)
{
	cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//全局函数 类内实现
	friend void printfPerson(Person<T1, T2> p)
	{
		cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
	}
	//全局函数 类外实现
	//加空模板的参数列表
	//如果全局函数是类外实现，需要让编译器提前知道 这函数的存在
	friend void printfPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



void test01()
{
	Person<string, int> p("xl", 18);
	printfPerson(p);


	Person<string, int> p2("n9", 21);
	printfPerson2(p2);

}

int main()
{
	test01();
	return 0; 
}
```

建议全局函数做类内实现，用法简单，而且编译器可以直接识别。

