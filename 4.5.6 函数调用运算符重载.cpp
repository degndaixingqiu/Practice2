//#include <iostream>
//using namespace std;
//
////�����������������()
//
////��ӡ�����
//class Myprint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//
//void test01()
//{
//	Myprint p;
//	
//	//����ʹ�������ǳ��������ã��ֳƷº���
//	p("hello");
//}
//
////�º�������û�й̶�д��
////����ֵ�Ͳ���������Ҫ���صģ������ò�ͬ����ͬ
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//
//};
//
//
//void test02()
//{
//	MyAdd m_add;
//
//	cout << m_add(1, 3) << endl;
//
//
//	//������������=�������������˺�������()
//	cout << MyAdd()(100, 100) << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	test02();
//
//
//
//
//	return 0;
//}