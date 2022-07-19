//#include <iostream>
//using namespace std;
//
////拷贝构造函数调用
//
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int a)
//	{
//		age = a;
//		cout << "Person有参构造函数调用" << endl;
//	}
//
//
//	//拷贝构造函数
//	//传参是class，并且const拷贝类型
//	Person(const Person& p)
//	{
//		//将传入人身上属性，拷贝到我身上
//		age = p.age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//
//
//
//	//析构函数
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int age;
//
//};
//
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//
//	cout << "p1年龄：" << p1.age << endl;
//	cout << "p2年龄：" << p2.age << endl;
//
//}
//
////2. 值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p3;//调用默认构造
//	doWork(p3);//调用拷贝构造
//
//}
//
////3. 以值方式返回局部对象
//Person doWork02()
//{
//	//并不是将p4值返回给p5
//	//而是return时系统使用拷贝构造函数创造了新的临时的class，再给p5
//	Person p4;//此处调用一个默认构造+析构
//	cout << &p4 << endl;
//	return p4;//此处调用拷贝构造
//}
//
//
//
//void test03()
//{
//	Person p5 = doWork02();//此处有一个析构函数，用来在test03结束之后释放p5
//	cout << &p5 << endl;
//}
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
//
//
//	return 0;
//}