//#include <iostream>
//#include <string>
//using namespace std;
//
////递增运算符重载
//
////自定义整型
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger M);
//public:
//	MyInteger();
//
//	//重载前置++运算符
//	MyInteger& operator++();
//
//
//	//重载后置++运算符
//	//int是占位参数，可以用于区分前置和后置递增，只能写Int
//	MyInteger operator++(int);
//
//private:
//	int myNum;
//};
//
//MyInteger::MyInteger()
//{
//	myNum = 0;
//}
//
////前置递增++M
//MyInteger& MyInteger::operator++()
//{
//	//做操作
//	myNum++;
//
//	//将自身返回
//	return *this;
//}
//
////后置递增M++
////后置递增返回值，局部对象temp在函数运行完后被释放，若再操作为非法操作，要返回值而非引用
//MyInteger MyInteger::operator++(int)
//{
//	//先 记录当时结果
//	MyInteger temp = *this;
//
//	//后 递增
//	myNum++;
//
//	//最后将记录结果返回
//	cout << temp << endl;
//
//	return temp;
//}
//
////重载<<
//ostream& operator<<(ostream &cout,MyInteger M)
//{
//	cout << M.myNum << endl;
//
//	return cout;
//}
//
//
//
//void test01()
//{
//	MyInteger M;
//
//	cout << "M本身 = " << M << endl;
//
//	cout << "前置++M = " << ++M << endl;
//
//}
//
//
//void test02()
//{
//	MyInteger M;
//
//	cout << "后置递增M++ = " << M++ << endl;
//
//	cout << "M本身 = " << M << endl;
//
//}
//
//
//int main()
//{
//
//	test01();
//
//	test02();
//
//
//	return 0;
//}