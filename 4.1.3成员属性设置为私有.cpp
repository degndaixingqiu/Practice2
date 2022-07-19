//#include <iostream>
//#include <string>
//using namespace std;
//
////成员属性设置为私有
////1. 控制读写权限
////2. 对于写，检测数据有效性
//
////设计人类
//class Person
//{
//	//属性设置为私有会设置对外接口访问数据
//
//public:
//	//修改姓名
//	void setName(string a)
//	{
//		m_Name = a;
//	}
//
//	//获取姓名
//	//书写返回函数
//	string getName()
//	{
//		return m_Name;
//	}
//
//
//	//获取年龄 可读可写，若改必须在0-150之间
//	int getAge()
//	{
//		//m_age = 2;
//		return m_age;
//	}
//
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age > 0 && age < 100)
//		{
//			m_age = age;
//		}
//		else
//		{
//			m_age = 0;
//			cout << "年龄输入有误" << endl;
//		}
//	}
//
//	//获取搭档
//	void setPartner(string love)
//	{
//		m_partner = love;
//	}
//
//private:
//	//姓名 可读可写
//	string m_Name;
//
//	//年龄 只读
//	int m_age;
//
//	//搭档 只写
//	string m_partner = "人";
//
//};
//
//
//
//
//int main()
//{
//	Person p1;
//	
//	//设置打印姓名
//	p1.setName("张三");
//	cout << p1.getName() << endl;
//
//	//打印年龄
//	p1.setAge(150);
//	cout << "年龄为" << p1.getAge() << endl;
//
//	p1.setAge(30);
//	cout << "年龄为" << p1.getAge() << endl;
//
//	//设置搭档,只写不可访问
//	p1.setPartner("wangwu");
//
//
//	return 0;
//}