//#include <iostream>
//using namespace std;
//
////构造函数调用规则
////1. 创造一个类，编译器给每个类添加至少3个函数
////默认构造（空实现）
////析构函数（空实现）
////拷贝构造（值拷贝）
//
//
////2. 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
////3. 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person默认构造" << endl;
//	//}
//
//
//	//Person(int a)
//	//{
//	//	cout << "Person有参构造" << endl;
//	//	age = a;
//	//}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造" << endl;
//		age = p.age;
//	}
//
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//
//	int age;
//};
//
//
////void test01()
////{
////	Person p;
////	p.age = 18;
////	Person p2(p);
////	cout << "p2年龄" << p2.age << endl;
////}
//
//
////2. 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//void test02()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "p2年龄" << p2.age << endl;
//
//}
//
//
////3. 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//void test03()
//{
//	Person p1(10);
//	Person p2(p1);
//
//
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	test03();
//
//
//
//	return 0;
//
//}
