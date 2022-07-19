//#include <iostream>
//using namespace std;
//
////函数重载
//
////1. 引用作为函数重载条件
//void func(int &a)//形参是引用
//{
//
//	cout << "func调用" << endl;
//}
//
//void func(const int& a)//形参是常量引用
//{
//
//	cout << "func(const)调用" << endl;
//}
//
//
////2. 函数重载碰到函数默认参数
//void func2(int a)
//{
//
//	cout << "func2(int a)调用" << endl;
//}
//
//void func2(int a,int b = 10)
//{
//
//	cout << "func(const)调用" << endl;
//}
//
//
//int main()
//{
//	int a = 10;
//	func(a);
//
//	func(20);
//
//
//	//func2(1);//两个都可调用，出现二义性，报错，尽量避免此情况
//	func2(1, 2);//正确，必调用两个形参的函数
//
//	return 0;
//}