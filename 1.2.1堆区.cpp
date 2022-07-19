//#include <iostream>
//using namespace std;
//
//int* func()
//{
//	//利用new，将数据开辟到堆区
//	//指针本质是局部变量，放在栈上，指针保存的数据放在堆区
//	int* p = new int(10);//new返回的是new出内存的地址
//	return p;
//}
//
//
//int main()
//{
//	//在堆区开辟数据
//	int* p = func();
//
//	//堆区数据由程序员开辟、释放，或者程序执行完，系统统一释放
//	//若不释放，则一直存在
//
//	cout << p << endl;
//	cout << *p << endl;
//
//	cout << p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//
//
//	return 0;
//}