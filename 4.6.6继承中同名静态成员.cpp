//#include <iostream>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����ʽ
//
//class Base
//{
//public:
//	//���������������ʼ��
//	static int m_A;
//
//
//	static void func()
//	{
//		cout << "Base�¾�̬��Ա����" << endl;
//	}
//
//
//	//����
//	static void func(int a)
//	{
//		cout << "Base�¾�̬��Ա�������أ�int a��" << endl;
//	}
//
//};
//int Base::m_A = 100;
//
//
//class Son:public Base
//{
//public:
//	//���������������ʼ��
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son�¾�̬��Ա����" << endl;
//	}
//
//};
//int Son::m_A = 200;
//
//
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1. ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	cout << "son��m_A: " << s.m_A << endl;
//
//	cout << "Base��m_A: " << s.Base::m_A << endl;
//	
//	//2. ͨ����������
//	cout << "ͨ����������" << endl;
//	cout << "son��m_A: " << Son::m_A << endl;
//	
//	//��һ�������Ǵ���ͨ��������ʽ���ʣ��ڶ��������Ǵ�����ʸ�����������
//	cout << "Base��m_A: " << Son::Base::m_A << endl;
//}
//
//
////ͬ����̬����
//void test02()
//{
//	//1. ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	s.func();
//
//	s.Base::func();
//
//	//2. ͨ����������
//	cout << "ͨ����������" << endl;
//	Son::func();
//
//	//��һ�������Ǵ���ͨ��������ʽ���ʣ��ڶ��������Ǵ�����ʸ�����������
//	Son::Base::func();
//
//	//base���صĵ��ú�֮ǰͬ��
//	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա��������������
//	//����ͨͬ������һ�£�������Ҫ��������
//	Son::Base::func(100);
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
//
//
//
//
//	return 0;
//}