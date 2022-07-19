//#include <iostream>
//using namespace std;
//
////函数重载
////函数名同
//
//
////函数重载满足条件
////1. 在同一作用域下
////2. 函数名同
////3. 参数类型不同，或个数不同，或顺序不同
//void func()
//{
//	cout << "func" << endl;
//}
//
//void func(int a,int b)
//{
//	cout << "func(int)" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double)" << endl;
//}
//
//void func(int a,double b)
//{
//	cout << "func(int  ouble)" << endl;
//}
//
//
//void func(double a, int b)
//{
//	cout << "func(double int)" << endl;
//}
//
//
////参数类型相同，顺序不同调用会出问题，
////void func(int a, int b)
////{
////	cout << "func(int a  int b)" << endl;
////}
////
////void func(int b, int a)
////{
////	cout << "func(int b  int a)" << endl;
////}
//
//
////注意事项
////函数返回值不可作为重载条件
////void func(int a, double b)
////{
////	cout << "func(int  ouble)" << endl;
////}
////
////int func(int a, double b)
////{
////	cout << "func(int  ouble)" << endl;
////}
//
//
//
//
//
//int main()
//{
//
//	func();
//	func(1, 2);
//	func(3.14);
//	func(1, 1.1);
//	func(1.1, 1);
//
//
//	return 0;
//}