//#include <iostream>
//#include <string>
//using namespace std;
//
////递减运算符重载
//
////自定义类
//class MyInteger
//{
//	friend ostream& operator<<(ostream &cout, MyInteger M);
//public:
//	//构造函数
//	MyInteger();
//
//	//前置递减函数
//	MyInteger& operator--();
//
//	//后置递减函数
//	MyInteger operator--(int);
//
//
//
//private:
//	int m_num;
//};
//
//
////构造函数声明
//MyInteger::MyInteger()
//{
//	m_num = 2;
//}
//
////前置递减--a
//MyInteger& MyInteger::operator--()
//{
//	this->m_num--;
//
//	return *this;
//}
//
////后置递减a--
//MyInteger MyInteger::operator--(int)
//{
//	MyInteger temp = *this;
//
//	m_num--;
//
//	cout << temp << endl;
//
//	return temp;
//}
//
////重载<<
//ostream& operator<<(ostream &cout,MyInteger M)
//{
//	cout << M.m_num << endl;
//
//	return cout;
//}
//
//
////前置--a测试
//void test01()
//{
//	MyInteger M;
//	cout << "原M: " << M << endl;
//
//	cout << "--M: " << --M << endl;
//}
//
////后置--测试
//void test02()
//{
//	MyInteger M;
//	cout << "原M: " << M << endl;
//
//	cout << "M--: " << M-- << endl;
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
//
//
//	return 0;
//}