//#include <iostream>
//using namespace std;
//
////const修饰成员函数
////常函数
//
////常对象
//
//class Person
//{
//public:
//	//常函数
//	//this指针本质  是指针常量  指针的指向不可修改
//	//Person * const this;
//	//在成员函数后加const,修饰this指针，让指针指向的值也不可修改 
//	void showPerson() const
//	{
//		//this->m_A = 100;
//
//		this->m_B = 100;//mutable变量可修改
//
//		//this = NULL;//this指针不可修改指向
//	}
//
//
//	void func()
//	{
//
//	}
//
//
//
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加mutable
//};
//
//
////常对象
//
//void test02()
//{
//	const Person p;//在对象前加const,变为常对象
//	//p.m_A = 100;
//	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
//
//
//	//常对象只调用常函数
//	p.showPerson();
//	//p.func(); 常对象不可调用普通成员函数，因为普通成员函数可修改属性
//
//}
//int main()
//{
//
//
//
//	return 0;
//}