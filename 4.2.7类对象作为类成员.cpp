//#include <iostream>
//#include <string>
//using namespace std;
//
////�������Ϊ���Ա
//
//
////�ֻ���
//class Phone
//{
//public:
//
//	//���캯��
//	Phone(string pname)
//	{
//		m_Pname = pname;
//		cout << "�ֻ�����" << endl;
//	}
//	
//	~Phone()
//	{
//		cout << "�ֻ�����" << endl;
//	}
//
//
//	string m_Pname;
//
//};
//
//
//class Person
//{
//public:
//
//	//���캯��
//	//Phone m_pphone = pname,��ʽת����
//	Person(string name,string pname):m_Name(name),m_phone(pname)
//	{
//		cout << "�˹���" << endl;
//	}
//
//	~Person()
//	{
//		cout << "������" << endl;
//	}
//
//
//	//����
//	string m_Name;
//
//	//�ֻ�
//	Phone m_phone;
//};
//
//
////���ֻ�������Ϊ�˵ĳ�Ա���ȹ����ֻ�������
////�������˺������ֻ�
////����˳��͹���˳���෴
//
//void test01()
//{
//	Person p("����","iphone");
//	cout << "����" << p.m_Name << endl;
//	cout << "�ֻ�" << p.m_phone.m_Pname << endl;
//}
//
//int main()
//{
//
//
//	test01();
//
//
//
//
//
//
//
//	return 0;
//}