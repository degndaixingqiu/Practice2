//#include <iostream>
//using namespace std;
//
//
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////const修饰全局变量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//全局区
//	//存放全局变量，静态变量，常量
//	//全局变量：未在函数体中的变量
//
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 10;
//
//	cout << "局部变量a地址：" << &a << endl;
//
//	cout << "全局变量g_a地址：" << &g_a << endl;
//
//
//	//静态变量
//	//普通变量前加static，是静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "静态变量s_a地址：" << &s_a << endl;
//	
//	
//	//常量
//	//1. 字符串常量""
//	cout << "字符串常量地址：" << &"HEOOL" << endl;
//	
//	//2. const修饰的变量
//	//const 修饰的全局变量，const修饰的局部变量
//	cout << "const 修饰的全局变量c_g_a地址：" << &c_g_a << endl;
//	cout << "const 修饰的全局变量c_g_b地址：" << &c_g_b << endl;
//
//
//	//const修饰的局部变量
//	const int ca = 10;
//	const int cb = 10;
//
//	cout << "const 修饰的局部变量ca地址：" << &ca << endl;
//	cout << "const 修饰的局部变量cb地址：" << &cb << endl;
//
//	return 0;
//
//
//
//}