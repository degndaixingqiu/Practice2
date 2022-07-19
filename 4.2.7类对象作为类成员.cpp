//#include <iostream>
//#include <string>
//using namespace std;
//
////类对象作为类成员
//
//
////手机类
//class Phone
//{
//public:
//
//	//构造函数
//	Phone(string pname)
//	{
//		m_Pname = pname;
//		cout << "手机构造" << endl;
//	}
//	
//	~Phone()
//	{
//		cout << "手机析构" << endl;
//	}
//
//
//	string m_Pname;
//
//};
//
//
//class Person
//{
//public:
//
//	//构造函数
//	//Phone m_pphone = pname,隐式转换法
//	Person(string name,string pname):m_Name(name),m_phone(pname)
//	{
//		cout << "人构造" << endl;
//	}
//
//	~Person()
//	{
//		cout << "人析构" << endl;
//	}
//
//
//	//姓名
//	string m_Name;
//
//	//手机
//	Phone m_phone;
//};
//
//
////当手机对象作为人的成员，先构造手机后构造人
////先析构人后析构手机
////析构顺序和构造顺序相反
//
//void test01()
//{
//	Person p("张三","iphone");
//	cout << "姓名" << p.m_Name << endl;
//	cout << "手机" << p.m_phone.m_Pname << endl;
//}
//
//int main()
//{
//
//
//	test01();
//
//
//
//
//
//
//
//	return 0;
//}