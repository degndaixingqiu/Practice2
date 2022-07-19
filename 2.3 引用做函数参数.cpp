//#include <iostream>
//using namespace std;
//
////引用做函数参数
//
////交换函数
////1. 值传递、
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
////2. 地址传递
//void swap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////3. 引用传递
//void swap3(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	swap(a, b);//值传递，形参不会修饰实参
//	cout << "值传递a= " << a << endl;
//	cout << "值传递b=" << b << endl;
//
//
//	swap2(&a, &b);//地址传递，形参会改变实参
//	cout << "地址传递a= " << a << endl;
//	cout << "地址传递b=" << b << endl;
//
//
//	swap3(a, b);//引用传递，形参会改变实参
//	cout << "引用传递a= " << a << endl;
//	cout << "引用传递b=" << b << endl;
//
//
//
//	return 0;
//}