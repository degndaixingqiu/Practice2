//#include <iostream>
//using namespace std;
////��̬��Ա����
//
//class Person
//{
//public:
//
//	//1. ���ж��󶼹���ͬһ������
//	//2. ����׶η����ڴ�
//	//3. �������������ʼ��
//	static int m_A;
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//	//������ʲ���˽�о�̬��Ա����
//
//private:
//	static int m_B;
//
//};
//
//int Person:: m_A = 1000;
//int Person::m_B = 300;
//
//void test01()
//{
//	Person p1;
//	cout << "p1��" << p1.m_A << endl;
//	
//
//	 
//	Person p2;
//	p2.m_A = 200;
//	cout << "p2��" << p2.m_A << endl;
//
//	//p1,p2����m_A,��һ������֮�����ݻᷢ���仯  
//	cout << "p1��" << p1.m_A << endl;
//
//}
//
//void test02()
//{
//	//��̬��Ա����������ĳ�������ϣ����ж��󶼹���һ������
//
//	//���ַ��ʷ�ʽ��
//	//1. ����������з���
//	Person p;
//	cout << "��������" << p.m_A << endl;
//
//	//2. ͨ���������з���
//	cout << "��������" << Person::m_A << endl;
//
////cout << "����private" << Person::m_B << endl;
//}
//
//
//
//int main()
//{
//
//
//	test01();
//
//	test02();
//
//
//
//	return 0;
//}