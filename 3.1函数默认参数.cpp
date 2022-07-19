//#include <iostream>
//using namespace std;
//
////函数默认参数
//
////如果自己传入数据则用自己数据，如果没有则用默认参数
//int func(int a, int b=20, int c=30)
//{
//	return a + b + c;
//}
//
//
////注意事项
////1. 如果某个位置已经有了默认参数，那么从此往后，从左到右必须有默认值
////int func2(int a=10, int b, int c )//错误版
////{
////	return a + b + c;
////}
//
////2. 如果函数声明有默认参数，那函数实现不能有默认参数
////实现有，声明不能有，二者只有一个能有
//int func2(int a = 10, int b = 20);
//
//int func2(int a = 10, int b = 20)
//{
//	return a + b;
//}
//
//
//
//int main()
//{
//
//	cout << func(10) << endl;//使用函数默认值
//
//
//	cout << func(10,30) << endl;//传参有修改，使用修改值
//
//
//	//重定义默认参数，是错误的
//	//cout << func2(10, 10); << endl;
//
//
//	return 0;
//}