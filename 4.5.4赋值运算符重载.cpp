//#include <iostream>
//#include <string>
//using namespace std;
//
////��ֵ���������
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//���ݿ����ڶ���
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//
//			m_Age = NULL;
//		}
//
//	}
//
//	
//	//���ظ�ֵ����
//	//p2=p1,p2���ô˺�����ֻ����p1
//	Person & operator=(Person &p1)
//	{
//		//�������ṩǳ����
//
//		//Ҫ���ж��Ƿ��������ڶ�������������ͷŸɾ��������س����
//		//���¿����ڴ�ռ�
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		
//
//		//���
//		m_Age = new int(*p1.m_Age);
//
//		//Ҫ�з���ֵ�����������ʽ����
//		//p3=p2=p1
//		return *this;
//	}
//
//
//	//��������Ϊָ�����
//	int* m_Age;
//};
//
//
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(18);
//
//	Person p3(28);
//
//	p3 = p2 = p1;
//
//	//������ֵҪ��ָ�������
//	cout << "p1����" << *p1.m_Age << endl;
//
//	cout << "p2����" << *p2.m_Age << endl;
//
//	cout << "p3����" << *p3.m_Age << endl;
//
//}
//
//
//
//int main()
//{
//
//	test01();
//
//
//
//
//	return 0;
//}