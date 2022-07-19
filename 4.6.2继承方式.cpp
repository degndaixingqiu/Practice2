//#include <iostream>
//using namespace std;
//
////继承方式
//
////公共继承
//class Base
//{
//public:
//	int m_A;
//
//protected:
//	int m_B;
//
//private:
//	int m_C;
//
//};
//
//
//
//class Son1:public Base
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中公共权限成员，在子类中依然是公共权限
//		m_B = 10; // 父类中保护权限成员，在子类中依然是保护权限
//		//m_C = 10; // 父类中私有权限成员，子类无法访问
//	}
//
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 1000;//类外无法访问保护权限
//}
//
//
////保护权限
//class Base2
//{
//public:
//	int m_A;
//
//protected:
//	int m_B;
//
//private:
//	int m_C;
//};
//
//class Son2:protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类：公共——————子类：保护
//		m_B = 100; //父类：保护——————子类：保护
//		//m_C = 10; // 父类中私有权限成员，子类无法访问
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	
//	//s2.m_A=1000;//son2中m_A为保护权限，类外无法访问
//	//m_B同理
//}
//
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//
//protected:
//	int m_B;
//
//private:
//	int m_C;
//};
//
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类：公共——————子类：私有
//		m_B = 100; //父类：保护——————子类：私有
//		//m_C = 10; // 父类:私有——————子类：私有，无法访问
//	}
//
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A=1000//SON3中变为私有成员，类外无法访问
//	//s3.m_B=1000//SON3中变为私有成员，类外无法访问
//}
//
//class GrandSon :public Son3
//{
//public:
//	void func()
//	{
//		//尽管公有继承Son3,但变量在son3中已经全部变为私有，再继承子类无法访问父类中私有成员
//		//m_A = 100;
//		//m_B = 100;
//	}
//};
//
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
//
//	return 0;
//}