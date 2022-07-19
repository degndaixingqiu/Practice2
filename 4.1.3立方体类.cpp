//#include <iostream>
//#include <string>
//using namespace std;
////设计立方体类(Cube)
////求出立方体的面积和体积
////分别用全局函数和成员函数判断两个立方体是否相等。
//
//
////立方体类
//class Cube
//{
//public:
//	//设置边长
//	void setSide(int a)
//	{
//		m_side = a;
//	}
//
//	//获取边长
//	int getSide()
//	{
//		return m_side;
//	}
//
//	//计算立方体面积
//	int calArea()
//	{
//		return m_side * m_side * 6;
//	}
//
//	//计算立方体体积
//	int calBulk()
//	{
//		return m_side * m_side * m_side;
//	}
//
//	//判断两个立方体是否相等
//	//已知对象调用函数，只传入一个参数即可
//	void cubeSame(Cube c1)
//	{
//		if (m_side == c1.m_side)
//		{
//			cout << "两立方体相等" << endl;
//		}
//		else
//		{
//			cout << "两立方体不等" << endl;
//		}
//	}
//
//private:
//	//边长
//	int m_side;
//
//};
//
////定义全局函数
//void allSame(Cube & c1, Cube & c2)
//{
//	if (c1.getSide() == c2.getSide())
//	{
//		cout << "两立方体相等" << endl;
//	}
//
//	else
//	{
//		cout << "两立方体不等" << endl;
//	}
//}
//
//int main()
//{
//	//实例化立方体
//	Cube c1,c2;
//	c1.setSide(3);
//	c2.setSide(5);
//
//	cout << "第一个立方体边长为" << c1.getSide() << endl;
//	cout << "第二个立方体边长为" << c2.getSide() << endl;
//
//	//求面积体积
//	cout << "立方体面积为" << c1.calArea() << endl;
//	cout << "立方体体积为" << c1.calBulk() << endl;
//
//	//成员函数判断是否相等
//	c1.cubeSame(c2);
//
//	//全局函数判断是否相等
//	allSame(c1, c2);
//	
//
//
//	return 0;
//}