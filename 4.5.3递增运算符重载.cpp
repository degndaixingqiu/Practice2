//#include <iostream>
//#include <string>
//using namespace std;
//
////�������������
//
////�Զ�������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger M);
//public:
//	MyInteger();
//
//	//����ǰ��++�����
//	MyInteger& operator++();
//
//
//	//���غ���++�����
//	//int��ռλ������������������ǰ�úͺ��õ�����ֻ��дInt
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
////ǰ�õ���++M
//MyInteger& MyInteger::operator++()
//{
//	//������
//	myNum++;
//
//	//��������
//	return *this;
//}
//
////���õ���M++
////���õ�������ֵ���ֲ�����temp�ں�����������ͷţ����ٲ���Ϊ�Ƿ�������Ҫ����ֵ��������
//MyInteger MyInteger::operator++(int)
//{
//	//�� ��¼��ʱ���
//	MyInteger temp = *this;
//
//	//�� ����
//	myNum++;
//
//	//��󽫼�¼�������
//	cout << temp << endl;
//
//	return temp;
//}
//
////����<<
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
//	cout << "M���� = " << M << endl;
//
//	cout << "ǰ��++M = " << ++M << endl;
//
//}
//
//
//void test02()
//{
//	MyInteger M;
//
//	cout << "���õ���M++ = " << M++ << endl;
//
//	cout << "M���� = " << M << endl;
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