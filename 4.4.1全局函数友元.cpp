//#include <iostream>
//#include <string>
//using namespace std;
//
////��Ԫ
////ȫ�ֺ�������Ԫ
//
//
////��������
//class Building
//{
//
//	//��Ԫ���������Է���building��˽�г�Ա
//	friend void goodGuy(Building& b);
//
//public:
//	Building()
//	{
//		m_LivingRoom = "����";
//		m_SittingRoom = "����";
//	}
//
//	string m_SittingRoom;//����
//
//private:
//	string m_LivingRoom;//����
//
//
//};
//
//
////ȫ�ֺ���
////�����������û���ָ��
//void goodGuy(Building& b)
//{
//	cout << "����������" << b.m_SittingRoom << endl;
//
//	cout << "�������ң�" << b.m_LivingRoom << endl;
//
//
//}
//
//
//void test01()
//{
//	Building build;
//
//	goodGuy(build);
//
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
//	return 0;
//}