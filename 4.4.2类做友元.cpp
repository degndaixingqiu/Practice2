//#include <iostream>
//#include <string>
//using namespace std;
////������Ԫ
//
//
//class Building;
//class GoodGuy
//{
//public:
//
//	GoodGuy();
//	void visit();//�ιۺ���������building������
//
//	Building* building;
//private:
//
//};
//
//class Building
//{
//	//GoodGuy�Ǳ���������࣬���Է���˽�г�Ա
//
//	friend class GoodGuy;
//
//public:
//
//	Building();
//
//	string m_SittingRoom;//����
//
//private:
//	string m_LivingRoom;//����
//};
//
//
////����ȥд��Ա������������ǰ��������
//GoodGuy::GoodGuy()
//{
//	//���콨�������
//	building = new Building;
//}
//
//void GoodGuy::visit()
//{
//	cout << "�����ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//	cout << "�����ڷ��ʣ�" << building->m_LivingRoom << endl;
//}
//
//
//
//Building::Building()
//{
//	m_LivingRoom = "����";
//	m_SittingRoom = "����";
//}
//
//
//
//void test01()
//{
//	GoodGuy G;
//	G.visit();
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