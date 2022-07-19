//#include <iostream>
//using namespace std;
//
////函数调用运算符重载()
//
////打印输出类
//class Myprint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//
//void test01()
//{
//	Myprint p;
//	
//	//由于使用起来非常像函数调用，又称仿函数
//	p("hello");
//}
//
////仿函数很灵活，没有固定写法
////返回值和参数根据需要重载的（）作用不同而不同
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//
//};
//
//
//void test02()
//{
//	MyAdd m_add;
//
//	cout << m_add(1, 3) << endl;
//
//
//	//匿名函数对象=匿名对象重载了函数对象()
//	cout << MyAdd()(100, 100) << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	test02();
//
//
//
//
//	return 0;
//}