//#include <iostream>
//#include <string>
//using namespace std;
////类做友元
//
//
//class Building;
//class GoodGuy
//{
//public:
//
//	GoodGuy();
//	void visit();//参观函数，访问building中属性
//
//	Building* building;
//private:
//
//};
//
//class Building
//{
//	//GoodGuy是本类好朋友类，可以访问私有成员
//
//	friend class GoodGuy;
//
//public:
//
//	Building();
//
//	string m_SittingRoom;//客厅
//
//private:
//	string m_LivingRoom;//卧室
//};
//
//
////类外去写成员函数，函数名前加作用域
//GoodGuy::GoodGuy()
//{
//	//创造建筑物对象
//	building = new Building;
//}
//
//void GoodGuy::visit()
//{
//	cout << "类正在访问：" << building->m_SittingRoom << endl;
//
//	cout << "类正在访问：" << building->m_LivingRoom << endl;
//}
//
//
//
//Building::Building()
//{
//	m_LivingRoom = "卧室";
//	m_SittingRoom = "客厅";
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