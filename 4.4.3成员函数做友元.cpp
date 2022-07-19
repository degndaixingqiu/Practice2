//#include <iostream>
//#include <string>
//using namespace std;
//
////成员函数做友元
//
//class Building;
//class GoodGuy
//{
//public:
//	GoodGuy();
//
//	void visit();//让visit访问building私有内容
//	void visit2();//让visit2访问不到building私有内容
//
//	Building* building;
//};
//
//
//class Building
//{
//	//告诉编译器，GoodGuy()中visit函数可以作为友元函数访问building私有成员
//	friend void GoodGuy::visit();
//
//public:
//
//	Building();
//
//	string m_SittingRoom;//客厅
//
//private:
//
//	string m_LivingRoom;//卧室
//};
//
//
//
//Building::Building()
//{
//	m_LivingRoom = "卧室";
//	m_SittingRoom = "客厅";
//}
//
//GoodGuy::GoodGuy()
//{
//	//创建建筑物对象
//	building = new Building;
//}
//
//void GoodGuy::visit()
//{
//	cout << "visit访问客厅" << building->m_SittingRoom << endl;
//
//	cout << "visit访问卧室" << building->m_LivingRoom << endl;
//}
//
//void GoodGuy::visit2()
//{
//	cout << "visit2访问客厅" << building->m_SittingRoom << endl;
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