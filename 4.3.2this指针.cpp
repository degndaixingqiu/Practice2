//#include <iostream>
//using namespace std;
//
////this 指针
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向  被调用的成员函数  所属的对象
//		//也就是p1
//		this->age = age;
//	}
//
//
//	//若用值的方式返回，则系统会拷贝构造出新的class，和原class不同只是值一样
//	//引用方式返回，则不会创建新对象，一直返回原对象
//	Person& PersonAddAge(Person &p)
//	{
//		//p年龄和调用对象年龄相加 
//		this->age += p.age;
//		
//		//*this返回的是调用该函数的类
//		return *this;
//	}
//
//
//
//	~Person()
//	{
//
//	}
//
//
//	int age;
//
//
//};
//
//
////1. 解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1年龄为：" << p1.age << endl;
//}
//
//
////2. 返回调用函数对象本身用*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2年龄" << p2.age << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	test02();
//
//
//
//
//
//
//	return 0;
//}