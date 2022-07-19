//#include <iostream>
//using namespace std;
//
////深拷贝和浅拷贝
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person默认构造" << endl;
//
//	}
//
//	Person(int a,int b)
//	{
//		age = a;
//		m_height = new int(b);
//		cout << "Person有参构造" << endl;
//
//	}
//
//	//是浅拷贝，调用析构释放后，先释放调用的class指向的那块堆区空间
//	//浅拷贝调用时，p2中存放的是p1中开辟堆区的地址，delete后，p2释放堆区，则二者堆区都被释放
//	//浅拷贝深拷贝只针对指针指向的用户创建的堆区内存空间，如果是普通变量，不存在这个问题
//	//Person(const Person& p)
//	//{
//	//	age = p.age;
//
//	//}
//
//	Person(const Person & p)
//	{
//		cout << "Person拷贝构造" << endl;
//		age = p.age;
//
//		//浅拷贝
//		//m_height = p.m_height;编译器默认实现这行代码
//
//		//深拷贝
//		m_height = new int(*p.m_height);
//
//	}
//
//
//
//
//	//析构函数
//	~Person()
//	{
//		//析构代码，将堆区开辟数据释放
//		if (m_height != NULL)
//		{
//			delete m_height;
//			//保险起见，指针指空
//			m_height = NULL;
//		}
//
//		cout << "Person析构" << endl;
//	}
//
//	int age;
//	int* m_height;
//};
//
//void test01()
//{
//	Person p1(18,160);
//
//	cout << "p1年龄" << p1.age << endl;
//
//	cout << "p1身高" << *p1.m_height << endl;
//
//	Person p2(p1);
//
//	cout << "p2年龄" << p2.age << endl;
//
//	cout << "p2身高" << *p2.m_height << endl;
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
//
//
//
//
//	return 0;
//}