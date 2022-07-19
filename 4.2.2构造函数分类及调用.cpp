//#include <iostream>
//using namespace std;
////构造函数分类及调用
////分类
////1. 无参构造（默认构造函数）和有参构造
////2. 普通构造函数和拷贝构造函数
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person无参构造函数调用" << endl;
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
//
//	int age;
//};
//
//
////调用 
//void test01()
//{
//	//调用方法
//	//1. 括号法
//	Person p1;//默认构造函数的调用  
//	Person p2(10);//有参构造函数
//	Person p3(p2);//拷贝构造函数
//	
//	//注意事项1
//	//调用默认构造函数时，不要加();
//	//因为下面这行代码，编译器认为是一个函数声明,不会认为在创建对象
//	//Person p1();
//	
//  //这里age可以直接调用因为是public的
//	cout << "p2年龄: " << p2.age << endl;
//	cout << "p3年龄: " << p3.age << endl;
//
//	//2. 显示法
//	Person p4;//默认构造函数调用
//	Person p5 = Person(10);//有参构造
//	Person p6 = Person(p2);//拷贝调用
//
//	//Person(10);//匿名对象，当前行执行结束后，系统会立即回收匿名对象
//	//cout << "asss" << endl;
//
//
//	//注意事项2
//	// 不要利用拷贝构造函数，初始化匿名对象，编译器认为Person(p3) ==== Person p3;认为是对象声明
//	
//
//	//3. 隐式转换法
//	Person p7 = 10;//有参构造，相当于 Person p4 = Person(10)
//	Person p8 = p7;//拷贝构造，
//	  
//}
//
//int main()
//{
//
//	test01();
//
//
//
//
//
//	return 0;
//}