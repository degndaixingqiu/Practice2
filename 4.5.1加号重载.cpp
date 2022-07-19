//#include <iostream>
//#include <string>
//using namespace std;
//
////加号运算符重载
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//
//	Person(int a, int b);
//
//
//	//1. 成员函数重载
//	//Person operator+(Person& a)
//	//{
//	//	Person temp(0,0);
//	//	temp.m_A = this->m_A + a.m_A;
//	//	temp.m_B = this->m_B + a.m_B;
//
//	//	return temp;
//	//
//	//}
//
//};
//
//
//Person::Person(int a, int b)
//{
//	this->m_A = a;
//	this->m_B = b;
//
//}
//
//
//
//
//
////2. 全局函数重载
//Person operator+(Person &a,Person &b)
//{
//	Person temp(0, 0);
//	temp.m_A = b.m_A + a.m_A;
//	temp.m_B = b.m_B + a.m_B;
//
//	return temp;
//	
//}
//
////函数重载的版本
//Person operator+(Person& a, int b)
//{
//	Person temp(0, 0);
//	temp.m_A = a.m_A + b;
//	temp.m_B = a.m_B + b;
//
//	return temp;
//}
//
//
////成员函数重载调用
//void test01()
//{
//	Person p(10,20);
//
//	Person p2(10, 20);
//	
//
//	//成员函数重载本质调用
//	//Person p3 = p.operator+(p2);
//	Person p3 = p + p2;
//
//	cout << "使用成员函数重载的m_A" << p3.m_A << endl;
//	cout << "使用成员函数重载的m_b" << p3.m_B << endl;
//
//}
//
//
////全局函数重载调用
//void test02()
//{
//	Person p(10, 20);
//
//	Person p2(10, 20);
//
//
//	//全局函数重载本质调用
//	//Person p3 = operator+(p,p2);
//	Person p3 = p+p2;
//
//	cout << "使用全局函数重载的m_A" << p3.m_A << endl;
//	cout << "使用全局函数重载的m_b" << p3.m_B << endl;
//
//
//	
//}
//
//
////运算符重载也可以发生函数重载
//void test03()
//{
//	Person p(10, 20);
//
//
//	//函数重载本质调用
//	//Person p3 = operator+(p,p2);
//	Person p3 = p + 10;
//
//	cout << "使用函数重载的m_A" << p3.m_A << endl;
//	cout << "使用函数重载的m_b" << p3.m_B << endl;
//
//
//
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
//	test03();
//
//}
