//#include <iostream>
//#include <string>
//using namespace std;
//
////�Ӻ����������
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//
//	Person(int a, int b);
//
//
//	//1. ��Ա��������
//	//Person operator+(Person& a)
//	//{
//	//	Person temp(0,0);
//	//	temp.m_A = this->m_A + a.m_A;
//	//	temp.m_B = this->m_B + a.m_B;
//
//	//	return temp;
//	//
//	//}
//
//};
//
//
//Person::Person(int a, int b)
//{
//	this->m_A = a;
//	this->m_B = b;
//
//}
//
//
//
//
//
////2. ȫ�ֺ�������
//Person operator+(Person &a,Person &b)
//{
//	Person temp(0, 0);
//	temp.m_A = b.m_A + a.m_A;
//	temp.m_B = b.m_B + a.m_B;
//
//	return temp;
//	
//}
//
////�������صİ汾
//Person operator+(Person& a, int b)
//{
//	Person temp(0, 0);
//	temp.m_A = a.m_A + b;
//	temp.m_B = a.m_B + b;
//
//	return temp;
//}
//
//
////��Ա�������ص���
//void test01()
//{
//	Person p(10,20);
//
//	Person p2(10, 20);
//	
//
//	//��Ա�������ر��ʵ���
//	//Person p3 = p.operator+(p2);
//	Person p3 = p + p2;
//
//	cout << "ʹ�ó�Ա�������ص�m_A" << p3.m_A << endl;
//	cout << "ʹ�ó�Ա�������ص�m_b" << p3.m_B << endl;
//
//}
//
//
////ȫ�ֺ������ص���
//void test02()
//{
//	Person p(10, 20);
//
//	Person p2(10, 20);
//
//
//	//ȫ�ֺ������ر��ʵ���
//	//Person p3 = operator+(p,p2);
//	Person p3 = p+p2;
//
//	cout << "ʹ��ȫ�ֺ������ص�m_A" << p3.m_A << endl;
//	cout << "ʹ��ȫ�ֺ������ص�m_b" << p3.m_B << endl;
//
//
//	
//}
//
//
////���������Ҳ���Է�����������
//void test03()
//{
//	Person p(10, 20);
//
//
//	//�������ر��ʵ���
//	//Person p3 = operator+(p,p2);
//	Person p3 = p + 10;
//
//	cout << "ʹ�ú������ص�m_A" << p3.m_A << endl;
//	cout << "ʹ�ú������ص�m_b" << p3.m_B << endl;
//
//
//
//}
//
//
//
//int main()
//{	
//	test01();
//
//	test02();
//
//	test03();
//
//}
