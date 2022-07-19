//#include <iostream>
//using namespace std;
////静态成员变量
//
//class Person
//{
//public:
//
//	//1. 所有对象都共享同一份数据
//	//2. 编译阶段分配内存
//	//3. 类内声明类外初始化
//	static int m_A;
//
//	//静态成员变量也是有访问权限的
//	//类外访问不到私有静态成员变量
//
//private:
//	static int m_B;
//
//};
//
//int Person:: m_A = 1000;
//int Person::m_B = 300;
//
//void test01()
//{
//	Person p1;
//	cout << "p1的" << p1.m_A << endl;
//	
//
//	 
//	Person p2;
//	p2.m_A = 200;
//	cout << "p2的" << p2.m_A << endl;
//
//	//p1,p2共享m_A,有一个改了之后，数据会发生变化  
//	cout << "p1的" << p1.m_A << endl;
//
//}
//
//void test02()
//{
//	//静态成员变量不属于某个对象上，所有对象都共享一份数据
//
//	//两种访问方式：
//	//1. 创建对象进行访问
//	Person p;
//	cout << "变量访问" << p.m_A << endl;
//
//	//2. 通过类名进行访问
//	cout << "类名访问" << Person::m_A << endl;
//
////cout << "访问private" << Person::m_B << endl;
//}
//
//
//
//int main()
//{
//
//
//	test01();
//
//	test02();
//
//
//
//	return 0;
//}