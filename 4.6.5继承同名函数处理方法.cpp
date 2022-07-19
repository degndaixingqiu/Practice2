//#include <iostream>
//using namespace std;
//
////继承同名函数处理方法
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	~Base()
//	{
//
//	}
//
//	int Add()
//	{
//		return 2;
//	}
//
//	int Add(int a)
//	{
//		return 2.5;
//	}
//
//	int m_A;
//
//};
//
//
//class Son:public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	~Son()
//	{
//
//	}
//
//	int Add()
//	{
//		return 3;
//	}
//
//
//	int m_A;
//
//};
//
//
////同名成员属性
//void test01()
//{
//	Son s;
//	cout << "子类中m_A" << s.m_A << endl;
//
//	//如果通过子类对象访问父类中成员，在.后变量名前加作用域
//	cout << "父类中m_A" << s.Base::m_A << endl;
//
//}
//
//
////同名成员函数
//void test02()
//{
//	Son s;
//	//直接调用，调用子类中成员函数
//	cout << "子类中函数Add" << s.Add() << endl;
//
//	//如果通过子类对象访问父类中函数，在.后变量名前加作用域
//	cout << "父类中函数Add" <<s.Base::Add() << endl;
//
//	
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏父类中所有同名成员函数，包括重载的
//	//所以是不接受子类不加作用域直接调用的
//	//s.Add(100);是错误的
//	cout << "父类中函数重载Add(a)" << s.Base::Add(1) << endl;
//}
//
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