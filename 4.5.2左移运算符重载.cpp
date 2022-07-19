//#include <iostream>
//#include <string>
//using namespace std;
//
////左移运算符重载
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//
//	//利用成员函数重载<<
//	//不会利用成员函数重载<<,因为无法实现cout在左侧
//	//void operator<<(cout)
//	//{
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
//
////只能利用全局函数重载左移运算符
////函数返回是cout，为适应cout<<p<<"a"<<"b"<<endl的链式用法
////使得(cout<<p)作为<<的左边也可被识别，返回ostream::cout
//ostream & operator<<(ostream &cout,Person &p)//本质：operator<<(cout,p) 简化 cout<<p
//{
//	cout << "m_A = " << p.m_A << "m_B = " << p.m_B;
//
//	return cout;
//}
//
//void test01()
//{
//	Person p(10,20);
//
//
//	cout << p<<"helloworld"<<endl;
//
//
//
//
//}
//
//int main()
//{
//	test01();
//
//
//
//
//
//	return 0;
//}