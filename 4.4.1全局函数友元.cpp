//#include <iostream>
//#include <string>
//using namespace std;
//
////友元
////全局函数做友元
//
//
////建筑物类
//class Building
//{
//
//	//友元函数，可以访问building中私有成员
//	friend void goodGuy(Building& b);
//
//public:
//	Building()
//	{
//		m_LivingRoom = "卧室";
//		m_SittingRoom = "客厅";
//	}
//
//	string m_SittingRoom;//客厅
//
//private:
//	string m_LivingRoom;//卧室
//
//
//};
//
//
////全局函数
////传入类用引用或者指针
//void goodGuy(Building& b)
//{
//	cout << "建筑客厅：" << b.m_SittingRoom << endl;
//
//	cout << "建筑卧室：" << b.m_LivingRoom << endl;
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