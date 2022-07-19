//#include <iostream>
//#include <string>
//using namespace std;
//
////栈区数据的注意事项：不要返回局部变量地址（int*p），以及地址对应数据（*p）
////栈区数据由编译器管理和开辟
//
//int* func() //形参数据也会放在栈区
//{
//	int a = 10;//局部变量 存放在栈区，栈区数据在函数执行完后自动释放
//	return &a;//返回局部变量地址
//}
//
//int main()
//{
//	//栈区
//	int* p = func();
//
//	cout << *p << endl;//第一次可以打印正确十足是因为编译器做了保留
//	cout << *p << endl;//第二次数据不再保留
//
//
//
//
//
//	return 0;
//
//}