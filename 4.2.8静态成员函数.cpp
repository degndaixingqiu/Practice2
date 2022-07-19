//#include <iostream>
//using namespace std;
//
////静态成员函数
////所有对象都共享同一个函数
////静态成员函数只能访问静态成员变量
//
//class Person
//{
//public:
//
//	//静态成员变量
//	static int m_A;
//	int m_B;
//
//	//静态成员函数
//	static void func()
//	{
//		m_A = 100;//静态成员函数可以访问静态成员变量
//		cout << "static void func调用" << endl;
//		
//		//m_B = 1;//静态成员函数不可以访问非静态成员变量，函数无法区分到底是哪个对象的变量
//	}
//
//
//	//静态成员函数有访问权限
//private:
//	static void func2()
//	{
//		cout << "fun2调用" << endl;
//	}
//};
//
//int Person::m_A = 100;
//
//
//
////两种访问方式
//void test01()
//{
//	//1. 通过对象访问
//	Person p;
//	p.func();
//
//	//2. 通过类名访问
//	Person::func();
//
//	//Person::func2();private下类外不可访问
//
//}
//
//int  main()
//{
//	test01();
//
//
//
//
//
//
//	return 0;
//}
//
