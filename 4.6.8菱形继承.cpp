//#include <iostream>
//using namespace std;
//
////���μ̳�
//
////������
//class Animal
//{
//public:
//	int m_Age;
//};
//
////������̳У����Խ�����μ̳�����
////�ڼ̳�֮ǰ�ӹؼ��֣�virtual����Ϊ��̳�
//// Animal��Ϊ�����
//
////����
//class Sheep :virtual public Animal
//{
//
//};
//
////����
//class Tuo :virtual public Animal
//{
//
//};
//
////������
//class SheepTuo :public Sheep, public Tuo
//{
//	
//};
//
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//
//	st.Tuo::m_Age = 28;
//
//	//���������μ̳�ʱ����������ӵ����ͬ���ݣ��������������ּ���
//	cout << "st.Sheep::m_Age " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age " << st.Tuo::m_Age << endl;
//
//	//����ֻ��һ����������������Ҳ������ֲ���ȷ�����
//	cout << "st.m_Age " << st.m_Age << endl;
//
//	//�������ֻҪ��һ�ݼ��ɣ����μ̳�������������ݣ��˷�
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
//	return 0;
//}