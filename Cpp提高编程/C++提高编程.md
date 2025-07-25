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

## 2. STL初始



## 3. STL常用的容器

#### 3.1 String容器

string 是C++的字符串，而string本质上是一个类。

- `char*` 是一个指针
- `string` 是一个类，类中封装了`char*` 管理了这个字符串，是一个`char*`型容器

特点：比起C语言来讲，不必担心**越界**问题以及`'\0'`问题

##### 3.1.1 string构造函数

构造函数原型:

- `stirng();`	创建一个空的字符串
  `string(const char* s) `利用字符串s初始化
- `string(const string& str);` 利用string对象初始化另一个string对象
- `string(int n, char c);` 使用n个字符c初始化

**代码示例:**

```cpp
#include <iostream>
#include <string>

using namespace std;

/*
- `stirng();`	创建一个空的字符串
  `string(const char* s) `利用字符串s初始化
- `string(const string& str);` 利用string对象初始化另一个string对象
- `string(int n, char c);` 使用n个字符c初始化
*/


void test01()
{

	
	string s1;				//默认构造
		
	string s2("abcdef");
	cout << s2 << endl;
	

	string s3(s2);
	cout << s3 << endl;

	string s4(9, 'n');
	cout << s4 << endl;
}


int main()
{

	test01();
	return 0;
}
```

----

##### 3.1.2 string赋值操作

![image-20250723094624225](http://szn0n3z42.hb-bkt.clouddn.com/image-20250723094624225.png)

代码示例:

```cpp
#include <iostream>
#include <string>

using namespace std;


void test01()
{
	//三种等号赋值
	string str1;
	str1 = "N9 is my idol!";
	cout << "str1 = " << str1 << endl;


	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	
	string str3;
	str3 = 'y';
	cout << "str3 = " << str3 << endl;


	//
	string str4;
	str4.assign("DBQ is my idol!");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("DBQ is my idol!", 3);
	cout << "str5 = " << str5 << endl;


	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;


	string str7;
	str7.assign(9, 'N');
	cout << "str7 = " << str7 << endl;

}

int main()
{

	test01();
	return 0;
}
```

---

##### 3.1.3 string字符串拼接

- 实现字符串末尾拼接字符串

![image-20250723100125762](http://szn0n3z42.hb-bkt.clouddn.com/image-20250723100125762.png)

代码示例：

```cpp
#include <iostream>
#include <string>

using namespace std;

//string 字符串拼接操作。


void test01()
{

	//+= 号
	string str1 = "N9 ";
	str1 += "is my idol";
	cout << "str1 = " << str1 << endl;

	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2 = "(十年前我是金枪王,十年后我还是金枪王)";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	//append
	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcdef", 4);
	cout << "str3 = " << str3 << endl;

	string str4 = " is cf.";
	//str3.append(str4);
	str3.append(str4, 3, 4);
	cout << "str3 = " << str3 << endl;


}
int main()
{
	test01();
	return 0;
}
```

---

#####  3.1.4 string查找和替换

- 替换: 查找指定字符串是否存在
- 替换: 在指定的位置替换字符串

![image-20250723102023803](http://szn0n3z42.hb-bkt.clouddn.com/image-20250723102023803.png)

代码示例:

```cpp
#include <iostream>
#include <string>

using namespace std;


//字符串查找和替换

//1. 查找
void test01()
{
	string str1 = "decdefg";
	//find	从右往左
	int pos = str1.find("de");	//有返回下标 没有返回-1	第一次出现
	if (pos == -1)
		cout << "未找到字符串" << endl;
	else
		cout << "pos = " << pos << endl;

	//rfind 从左往右 
	pos = str1.rfind("de");	//有返回下标 没有返回-1	最后一次出现
	if (pos == -1)
		cout << "未找到字符串" << endl;
	else
		cout << "pos = " << pos << endl;
}


//2. 替换
void test02()
{
	string str1 = "abcdefg";

	//从1号位置起，3个字符替换为"1111"
	str1.replace(1, 3,"1111");
	cout << "str1 = " << str1 << endl;

}

int main()
{

	//test01();
	test02();
	return 0;
}
```

---

##### 3.1.5 string字符串比较

- 字符串比较是按照字符的ASCII码进行比较
- 等于返回0
- 大于返回1
- 小于返回-1

代码示例:

```cpp
#include <iostream>
#include <string>

using namespace std;


void test01()
{
	string str1 = "b";
	string str2 = "abcde";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 == str2" << endl;
	}
	else if (str1.compare(str2) > 0)
		cout << "str1 > str2 " << endl;
	else
		cout << "str1 < str2" << endl;



}


int main()
{
	test01();
	return 0;
}
```

---

#####  3.1.6 string 字符存取

`string` 中单个字符存取方式有两种

- `char& operator[](int n);` 通过`[]`的方式取字符
- `char& at(int n);`通过`at`方式获取字符

代码示例：

```cpp
#include <iostream>
#include <string>

using namespace std;

void test01()
{
	string str1 = "abcdefg";

	for (int i = 0; i < str1.size(); i++)
		cout << str1[i] << " ";

	cout << endl;


	for (int i = 0; i < str1.size(); i++)
		cout << str1.at(i) << " ";

	cout << endl;

	//修改单个字符
	str1[0] = 'x';
	str1.at(1) = 'x';
	cout << str1 << endl;

}

int main()
{
	test01();
	return 0;
}
```

---

##### 3.1.7 string插入和删除

![image-20250723143101859](http://szn0n3z42.hb-bkt.clouddn.com/image-20250723143101859.png)

 

代码示例:

```cpp
#include <iostream>
#include <string>

using namespace std;


void test01()
{
	string str = "hello";

	//插入
	str.insert(1, "111");
	cout << "str = " << str << endl;


	//删除
	str.erase(1, 3);
	cout << "str = " << str << endl;


}

int main()
{
	test01();
	return 0;
}
```

---

##### 3.1.8 string子串

- `string subter(int pos = 0, int n = npos)const;` 返回由`pos`开始的n个字符组成的字符串。

代码示例:

```cpp
#include <iostream>
#include <string>

using namespace std;

void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);

	cout << "subStr =  " << subStr << endl;

}

//使用操作
void test02()
{
	string email = "xl@code.com";
	
	//从邮件的地址中获取用户的信息
	int pos = email.find('@');
	
	string userName = email.substr(0, pos);

	cout << "userName = " << userName << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}
```

---

####  3.2 vector 容器

- vector 数据结构和**数组**十分相似，也成为**单端数组**。
- 不同的是:数据是**静态的**，vector是**动态的**。

动态扩展，并不是在原有的空间后继续开辟新的空间，而是寻找更大的空间，将原有数据拷贝新空间，释放原空间。

- vector容器的迭代器，是支持**随机访问**的迭代器。

##### 3.3.1 vector 构造函数

![image-20250724152151512](http://szn0n3z42.hb-bkt.clouddn.com/image-20250724152151512.png)

代码示例:

```cpp
#include <iostream>
#include <vector>

using namespace std;


void myPrint(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
}


void test01()
{
	//默认构造函数
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);

	myPrint(v1);

	//区间构造
	vector<int> v2(v1.begin(), v1.end());
	myPrint(v1);


	//n个elem
	vector<int> v3(10, 6);
	myPrint(v3);


	//拷贝构造
	vector<int> v4(v3);
	myPrint(v4);

}


int main()
{
	test01();
	return 0;
}
```

----

##### 3.3.2 vector 赋值操作

![image-20250724153735072](http://szn0n3z42.hb-bkt.clouddn.com/image-20250724153735072.png)

代码示例:

```cpp
#include <iostream>
#include <vector>

using namespace std;


void printVector(vector<int>& v)
{

	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";

	cout << endl;
}


void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);

	printVector(v1);

	//operator=
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//assign 区间赋值
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);

	//assign n个elem
	vector<int> v4;
	v4.assign(10, 6);
	printVector(v4);


}

int main()
{

	test01();
	return 0;
}
```

----

##### 3.3.3 vector容量和大小

![image-20250724155017378](http://szn0n3z42.hb-bkt.clouddn.com/image-20250724155017378.png)

代码示例:

```cpp
#include <iostream>
#include <vector>

using namespace std;


void printVector(vector<int>& v1)
{
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << endl;
}



void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1 为空! " << endl;
	}
	else
	{
		cout << "v1 的容量是: " << v1.capacity() << endl;
		cout << "v1 的大小是: " << v1.size() << endl;
	}

	v1.resize(15);	//默认新增的为0
	printVector(v1);
	v1.resize(20, 666);	//指定新增的为 666
	printVector(v1);

	v1.resize(5);
	printVector(v1);


}


int main()
{
	test01();
	return 0;
}
```

-----

##### 3.3.4 vector插入和删除

![image-20250724160733658](http://szn0n3z42.hb-bkt.clouddn.com/image-20250724160733658.png)

代码示例:

```cpp
#include <iostream>
#include <vector>

using namespace std;


void printVector(vector<int>& v)
{

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
}


void test01()
{
	vector<int> v1;

	for (int i = 1; i <= 10; i++)
		v1.push_back(i);

	printVector(v1);

	for (int i = 0; i < 5; i++)
		v1.pop_back();
	
	printVector(v1);


	v1.insert(v1.begin(), 10);
	printVector(v1);

	v1.insert(v1.begin(), 3, 100);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);


	v1.erase(v1.begin(), v1.begin() + 3);
	printVector(v1);

	v1.clear();
	printVector(v1);

}

int main()
{
	test01();
	return 0;
}
```

------

##### 3.3.5 vector数据存取

![image-20250724164516903](http://szn0n3z42.hb-bkt.clouddn.com/image-20250724164516903.png)

```cpp
#include <iostream>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << endl;

	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";

	cout << endl;

	cout << "v1 中第一个元素是: " << v1.front() << endl;
	cout << "v1 中最后一个元素是: " << v1.back() << endl;

}


int main()
{

	test01();
	return 0;
}
```

----

##### 3.3.6 vector互换容器

- 实现两个容器内元素进行互换
- `swqp(vec);` //将vect与本身的元素互换

```cpp
#include <iostream>
#include <vector>

using namespace std;



void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
}


//1.基本使用
void test01()
{
	vector<int> v1;
	cout << "交换前: " << endl;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);

	printVector(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
		v2.push_back(i);

	printVector(v2);

	cout << "交换后: " << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);



} 

//2.实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
		v.push_back(i);

	cout << "v的容量是: " << v.capacity() << endl;
	cout << "v的大小是: " << v.size() << endl;
	cout << endl;


	v.resize(3);
	cout << "v的容量是: " << v.capacity() << endl;
	cout << "v的大小是: " << v.size() << endl;
	cout << endl;


	vector<int>(v).swap(v);	//将匿名vector和v互换，然后系统自动释放匿名。
	cout << "v的容量是: " << v.capacity() << endl;
	cout << "v的大小是: " << v.size() << endl;
	cout << endl;

}

int main()
{

	//test01();
	test02();
	return 0;
}
```

---

##### 3.3.7 vector预留空间

- 可以减少vector在动态扩展容量时的扩展次数
- `reserve(int len)` //容器预留`len`个元素长度，预留位置不初始化，元素不可访问。

提前开辟可以减少中途新开辟空间，并迁移数据的麻烦。

![image-20250724174720070](http://szn0n3z42.hb-bkt.clouddn.com/image-20250724174720070.png)

```cpp
#include <iostream>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v(1000000);
	int cnt = 0;
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		/*if (v.size() >= v.capacity())
			cnt++;
		*/
		v.push_back(i);
		//看看开辟了多少次，迁移了多少次
		if (p != &v[0])
		{
			p = &v[0];
			cnt++;
		}

	}


	cout << "cnt = " << cnt;
}


int main()
{
	test01();
	return 0;
}
```

----

#### 3.3 deque容器

- 双端数组，可以对头端进行插入和删除操作。
- deque相对而言，对头部的插入和删除速度比vector快
- vector访问元素时速度比deque快，这和两者内部实现有关。

![image-20250725083901808](http://szn0n3z42.hb-bkt.clouddn.com/image-20250725083901808.png)

##### 3.3.1 deque构造函数

![image-20250725084635824](http://szn0n3z42.hb-bkt.clouddn.com/image-20250725084635824.png)

代码示例:

```cpp
#include <iostream>
#include <deque>


using namespace std;


void printDeque(const deque<int> d)
{
	for (auto it = d.begin(); it != d.end(); it++)
		cout << *it << " ";

	cout << endl;
}



void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
		d1.push_back(i);

	printDeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int> d3(10, 66);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);

}


int main()
{
	test01();
	return 0;
}
```

- deque 和 vector 容器的构造方式几乎一致，灵活使用即可。

---

##### 3.3.2 deque赋值操作

- deque的赋值操作和vector的赋值操作几乎一致。

![image-20250725085952821](http://szn0n3z42.hb-bkt.clouddn.com/image-20250725085952821.png)

代码示例:

```cpp
#include <iostream>
#include <deque>

using namespace std;


void printDeque(const deque<int>& d)
{
	for (auto it = d.begin(); it != d.end(); it++)
		cout << *it << " ";

	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
		d1.push_back(i);

	printDeque(d1);

	deque<int> d2;
	d2 = d1;
	printDeque(d2);

	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	printDeque(d3);

	deque<int> d4;
	d4.assign(10, 6);
	printDeque(d4);



}

int main()
{
	test01();
	return 0;
}
```

#####  3.3.3 deque大小操作

- 和vector的操作函数区别就少了一个容量，因为deque不需要判断容量，它本身就没有容量限制，可以无限的往后或者往前开辟空间。

![image-20250725091442124](http://szn0n3z42.hb-bkt.clouddn.com/image-20250725091442124.png)

----

#####  3.3.4deque插入和删除

![image-20250725093738101](http://szn0n3z42.hb-bkt.clouddn.com/image-20250725093738101.png)

代码示例:

```cpp
#include <iostream>
#include <deque>

using namespace std;


void printDeque(const deque<int>& d)
{
	for (auto it = d.begin(); it != d.end(); it++)
		cout << *it << " ";

	cout << endl;
}

void test01()
{
	deque<int> d1;
	//尾插
	for (int i = 0; i < 10; i++)
		d1.push_back(i);

	printDeque(d1);

	//头插
	for (int i = 0; i < 10; i++)
		d1.push_front(i);

	printDeque(d1);

	//尾删
	d1.pop_back();
	d1.pop_back();
	d1.pop_back();
	printDeque(d1);


	//头删
	d1.pop_front();
	d1.pop_front();
	d1.pop_front();
	printDeque(d1);


}

void test02()
{
	deque<int> d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	printDeque(d1);


	d1.insert(d1.begin(), 10);
	d1.insert(d1.begin(), 20);
	printDeque(d1);

	d1.insert(d1.begin(), 2, 100);
	printDeque(d1);

	// 按照区间进行插入。
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}

void test03()
{
	deque<int> d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	d1.push_back(4);

	printDeque(d1);
	auto it = d1.begin();
	it++;

	d1.erase(it);
	printDeque(d1);


	//按照区间删除
	//d1.erase(d1.begin(), d1.end());
	d1.clear();
	printDeque(d1);

}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}
```

---

##### 3.3.5 deque数据存取

![image-20250725102917791](http://szn0n3z42.hb-bkt.clouddn.com/image-20250725102917791.png)

代码示例:

```cpp
#include <iostream>
#include <deque>

using namespace std;



void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_back(50);

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";

	cout << endl;

	for (int i = 0; i < d.size(); i++)
		cout << d.at(i) << " ";

	cout << endl;

	cout << d.front() << endl;
	cout << d.back() << endl;


}

int main()
{
	test01();
	return 0;
}
```

---

##### 3.3.6 deque 排序

算法：

- `sort(iterator beg, iterator end)` // 对beg和end区间元素进行排序。

代码示例:

```cpp
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;


void printDeque(const deque<int>& d)
{
	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";

	cout << endl;
}


void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(260);
	d.push_back(9);
	d.push_back(37);

	printDeque(d);


	//排序 默认是升序
	sort(d.begin(), d.end());

	printDeque(d);

}


int main()
{
	test01();
	return 0;
}
```

