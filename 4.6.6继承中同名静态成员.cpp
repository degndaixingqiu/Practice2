//#include <iostream>
//using namespace std;
//
////继承中的同名静态成员处理方式
//
//class Base
//{
//public:
//	//类内声明，类外初始化
//	static int m_A;
//
//
//	static void func()
//	{
//		cout << "Base下静态成员函数" << endl;
//	}
//
//
//	//重载
//	static void func(int a)
//	{
//		cout << "Base下静态成员函数重载（int a）" << endl;
//	}
//
//};
//int Base::m_A = 100;
//
//
//class Son:public Base
//{
//public:
//	//类内声明，类外初始化
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son下静态成员函数" << endl;
//	}
//
//};
//int Son::m_A = 200;
//
//
//
////同名静态成员属性
//void test01()
//{
//	//1. 通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	cout << "son的m_A: " << s.m_A << endl;
//
//	cout << "Base的m_A: " << s.Base::m_A << endl;
//	
//	//2. 通过类名访问
//	cout << "通过类名访问" << endl;
//	cout << "son的m_A: " << Son::m_A << endl;
//	
//	//第一个：：是代表通过类名方式访问，第二个：：是代表访问父类作用域下
//	cout << "Base的m_A: " << Son::Base::m_A << endl;
//}
//
//
////同名静态函数
//void test02()
//{
//	//1. 通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	s.func();
//
//	s.Base::func();
//
//	//2. 通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();
//
//	//第一个：：是代表通过类名方式访问，第二个：：是代表访问父类作用域下
//	Son::Base::func();
//
//	//base重载的调用和之前同理
//	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数，包括重载
//	//与普通同名函数一致，访问需要加作用域
//	Son::Base::func(100);
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
//
//	return 0;
//}