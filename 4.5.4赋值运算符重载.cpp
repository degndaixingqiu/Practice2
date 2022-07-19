//#include <iostream>
//#include <string>
//using namespace std;
//
////赋值运算符重载
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//数据开辟在堆区
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//
//			m_Age = NULL;
//		}
//
//	}
//
//	
//	//重载赋值运算
//	//p2=p1,p2调用此函数，只传参p1
//	Person & operator=(Person &p1)
//	{
//		//编译器提供浅拷贝
//
//		//要先判断是否有属性在堆区，如果有先释放干净，再重载成深拷贝
//		//重新开辟内存空间
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		
//
//		//深拷贝
//		m_Age = new int(*p1.m_Age);
//
//		//要有返回值，方便进行链式调用
//		//p3=p2=p1
//		return *this;
//	}
//
//
//	//年龄设置为指针变量
//	int* m_Age;
//};
//
//
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(18);
//
//	Person p3(28);
//
//	p3 = p2 = p1;
//
//	//看其中值要把指针解引用
//	cout << "p1年龄" << *p1.m_Age << endl;
//
//	cout << "p2年龄" << *p2.m_Age << endl;
//
//	cout << "p3年龄" << *p3.m_Age << endl;
//
//}
//
//
//
//int main()
//{
//
//	test01();
//
//
//
//
//	return 0;
//}