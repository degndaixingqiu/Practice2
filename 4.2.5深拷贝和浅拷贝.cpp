//#include <iostream>
//using namespace std;
//
////�����ǳ����
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "PersonĬ�Ϲ���" << endl;
//
//	}
//
//	Person(int a,int b)
//	{
//		age = a;
//		m_height = new int(b);
//		cout << "Person�вι���" << endl;
//
//	}
//
//	//��ǳ���������������ͷź����ͷŵ��õ�classָ����ǿ�����ռ�
//	//ǳ��������ʱ��p2�д�ŵ���p1�п��ٶ����ĵ�ַ��delete��p2�ͷŶ���������߶��������ͷ�
//	//ǳ�������ֻ���ָ��ָ����û������Ķ����ڴ�ռ䣬�������ͨ�������������������
//	//Person(const Person& p)
//	//{
//	//	age = p.age;
//
//	//}
//
//	Person(const Person & p)
//	{
//		cout << "Person��������" << endl;
//		age = p.age;
//
//		//ǳ����
//		//m_height = p.m_height;������Ĭ��ʵ�����д���
//
//		//���
//		m_height = new int(*p.m_height);
//
//	}
//
//
//
//
//	//��������
//	~Person()
//	{
//		//�������룬���������������ͷ�
//		if (m_height != NULL)
//		{
//			delete m_height;
//			//���������ָ��ָ��
//			m_height = NULL;
//		}
//
//		cout << "Person����" << endl;
//	}
//
//	int age;
//	int* m_height;
//};
//
//void test01()
//{
//	Person p1(18,160);
//
//	cout << "p1����" << p1.age << endl;
//
//	cout << "p1���" << *p1.m_height << endl;
//
//	Person p2(p1);
//
//	cout << "p2����" << p2.age << endl;
//
//	cout << "p2���" << *p2.m_height << endl;
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
//
//
//
//
//	return 0;
//}