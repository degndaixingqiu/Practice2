//#include <iostream>
//using namespace std;
//
////��ͨҳ��ʵ��
//
////�̳�ʵ��ҳ��
//
////����ҳ��
//class Base
//{
//public:
//	void header()
//	{
//		cout << "��ҳ����¼����������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ģ������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "java,python(���������б�)" << endl;
//	}
//};
//
//
////�̳кô��������ظ�����
//// �﷨��class ���ࣺ�̳з�ʽ ����
//// ���ࣺҲ��Ϊ ������
//// ���ࣺҲ��Ϊ ����
//
//
////Javaҳ��
//class Java :public Base
//{
//public:
//	void content()
//	{
//		cout << "java ѧ���б�" << endl;
//	}
//};
//
//
////Pythonҳ��
//class Python :public Base
//{
//public:
//	void content()
//	{
//		cout << "Python ѧ���б�" << endl;
//	}
//};
//
//
////CPPҳ��
//class CPP :public Base
//{
//public:
//	void content()
//	{
//		cout << "CPP ѧ���б�" << endl;
//	}
//};
//
//
////javaҳ�����
//void test01()
//{
//	cout << "Java" << endl;
//	Java J;
//	J.content();
//	J.footer();
//	J.header();
//	J.left();
//
//	cout << "--------------" << endl;
//}
//
//
////pythonҳ�����
//void test02()
//{
//	cout << "Python" << endl;
//	Python P;
//	P.content();
//	P.footer();
//	P.header();
//	P.left();
//
//	cout << "--------------" << endl;
//}
//
//
////cppҳ�����
//void test03()
//{
//	cout << "CPP" << endl;
//	CPP C;
//	C.content();
//	C.footer();
//	C.header();
//	C.left();
//
//	cout << "--------------" << endl;
//}
//
//int main()
//{
//	test01();
//
//	test02();
//
//	test03();
//
//
//
//
//
//	return 0;
//}