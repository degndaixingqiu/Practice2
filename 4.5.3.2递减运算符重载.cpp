//#include <iostream>
//#include <string>
//using namespace std;
//
////�ݼ����������
//
////�Զ�����
//class MyInteger
//{
//	friend ostream& operator<<(ostream &cout, MyInteger M);
//public:
//	//���캯��
//	MyInteger();
//
//	//ǰ�õݼ�����
//	MyInteger& operator--();
//
//	//���õݼ�����
//	MyInteger operator--(int);
//
//
//
//private:
//	int m_num;
//};
//
//
////���캯������
//MyInteger::MyInteger()
//{
//	m_num = 2;
//}
//
////ǰ�õݼ�--a
//MyInteger& MyInteger::operator--()
//{
//	this->m_num--;
//
//	return *this;
//}
//
////���õݼ�a--
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
////����<<
//ostream& operator<<(ostream &cout,MyInteger M)
//{
//	cout << M.m_num << endl;
//
//	return cout;
//}
//
//
////ǰ��--a����
//void test01()
//{
//	MyInteger M;
//	cout << "ԭM: " << M << endl;
//
//	cout << "--M: " << --M << endl;
//}
//
////����--����
//void test02()
//{
//	MyInteger M;
//	cout << "ԭM: " << M << endl;
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