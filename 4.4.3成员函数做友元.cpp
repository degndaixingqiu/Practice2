//#include <iostream>
//#include <string>
//using namespace std;
//
////��Ա��������Ԫ
//
//class Building;
//class GoodGuy
//{
//public:
//	GoodGuy();
//
//	void visit();//��visit����building˽������
//	void visit2();//��visit2���ʲ���building˽������
//
//	Building* building;
//};
//
//
//class Building
//{
//	//���߱�������GoodGuy()��visit����������Ϊ��Ԫ��������building˽�г�Ա
//	friend void GoodGuy::visit();
//
//public:
//
//	Building();
//
//	string m_SittingRoom;//����
//
//private:
//
//	string m_LivingRoom;//����
//};
//
//
//
//Building::Building()
//{
//	m_LivingRoom = "����";
//	m_SittingRoom = "����";
//}
//
//GoodGuy::GoodGuy()
//{
//	//�������������
//	building = new Building;
//}
//
//void GoodGuy::visit()
//{
//	cout << "visit���ʿ���" << building->m_SittingRoom << endl;
//
//	cout << "visit��������" << building->m_LivingRoom << endl;
//}
//
//void GoodGuy::visit2()
//{
//	cout << "visit2���ʿ���" << building->m_SittingRoom << endl;
//}
//
//void test01()
//{
//	GoodGuy G;
//	G.visit();
//
//	G.visit2();
//}
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
//
//
//	return 0;
//}