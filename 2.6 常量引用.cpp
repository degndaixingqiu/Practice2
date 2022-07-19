//#include <iostream>
//using namespace std;
//
////打印数据
//void showValue(const int& val)
//{
//	//val = 1000; 无法修改数据
//	cout << "val =" << val << endl;
//}
//
//int main()
//{
//	//常量引用
//	//使用场景：用来修饰形参，防止误操作
//
//	int a = 10;
//
//	//加const后，编译器将代码修改为 int temp = 10,const int & ref = temp
//	//加const后，可以直接将引用=数值
//	const int& ref = 10;
//	//ref = 20;//加入const后，变为只读，不可修改
//
//
//
//	int a1 = 100;
//	showValue(a1);
//
//	cout << "a1 = " << a1 << endl;
//
//
//
//	return 0;
//}