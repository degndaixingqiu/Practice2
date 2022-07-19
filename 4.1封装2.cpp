//#include <iostream>
//#include <string>
//using namespace std;
//
////访问权限
////1. public 成员在类内可访问，类外也可
////2. protected 成员在类内可访问，类外不可，儿子可以访问父亲保护内容
////3. private 成员在类内可访问，类外不可，儿子不可访问父亲私有内容
//
//class Person
//{
//public:
//	//公共权限
//	string m_Name;
//
//protected:
//	//保护权限
//	string m_Car;
//
//private:
//	//私有权限
//	int m_Password;
//
//
//public:
//	void func()
//	{
//		//类内均可访问
//		m_Name = "张三";
//		m_Car = "BENZ";
//		m_Password = 123456;
//	}
//};
//
//int main()
//{
//	//实例化具体对象
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "aodi"; 类外不可访问
//	//p1.m_Password = 123456; 类外不可访问
//	cout << p1.m_Name << endl;
//
//
//
//
//
//
//	return 0;
//}