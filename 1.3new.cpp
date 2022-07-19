//#include <iostream>
//using namespace std;
//
////1. new基本语法
//int* func()
//{
//	//在堆区创建整型数据
//	int* p = new int(10);
//	return p;
//}
//
////2. 在堆区开辟数组
//void test02()
//{
//	//创建10整型数据的数组，在堆区
//	int* arr = new int[10];//数组有10个函数
//	
//	//赋值
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//
//	}
//
//	//打印
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	//释放堆区数组
//	//释放数组要加[]，表明是数组
//	delete[]arr;
//}
//
//
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//堆区数据由程序员创建控制
//	//若想释放，用delete
//	delete p;
//
//	//cout << *p << endl;//内存已经被释放，再次访问是非法操作，会报错
//
//	test02();
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}