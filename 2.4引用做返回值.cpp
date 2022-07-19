//#include <iostream>
//using namespace std;
//
////引用做函数返回值
////1. 不要返回局部变量引用
////数据类型&——返回引用
//int& test01()
//{
//	int a = 10;//局部变量，存放在栈区
//	return a;
//}
//
//
////2. 函数调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，在全局区，，全局区上数据在程序结束释放
//	return a;
//}
//
//
//int main()
//{
//	int &ref = test01();
//
//	cout << "ref=" << ref << endl;//第一次结果正确，是编译器做了保留
//
//	cout << "ref=" << ref << endl;//第二次结果错误，局部变量a内存已经释放
//
//
//
//	
//	int& ref2 = test02();
//	cout << "ref2=" << ref2 << endl;//第一次结果正确，是编译器做了保留
//
//	cout << "ref2=" << ref2 << endl;//第二次结果正确
//
//
//	test02() = 1000;//如果函数返回值是引用，这个函数调用可以作为等号左值
//	cout << "ref2=" << ref2 << endl;
//
//	cout << "ref2=" << ref2 << endl;
//
//	return 0;
//}