//#include <iostream>
//#include <string>
//using namespace std;
//
////�������������
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//
//	//���ó�Ա��������<<
//	//�������ó�Ա��������<<,��Ϊ�޷�ʵ��cout�����
//	//void operator<<(cout)
//	//{
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
//
////ֻ������ȫ�ֺ����������������
////����������cout��Ϊ��Ӧcout<<p<<"a"<<"b"<<endl����ʽ�÷�
////ʹ��(cout<<p)��Ϊ<<�����Ҳ�ɱ�ʶ�𣬷���ostream::cout
//ostream & operator<<(ostream &cout,Person &p)//���ʣ�operator<<(cout,p) �� cout<<p
//{
//	cout << "m_A = " << p.m_A << "m_B = " << p.m_B;
//
//	return cout;
//}
//
//void test01()
//{
//	Person p(10,20);
//
//
//	cout << p<<"helloworld"<<endl;
//
//
//
//
//}
//
//int main()
//{
//	test01();
//
//
//
//
//
//	return 0;
//}