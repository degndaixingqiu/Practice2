//#include <iostream>
//#include <string>
//#include <math.h>
//#include "point.h"
//#include "circle.h"
//using namespace std;
////设计一个圆形类（Circle)
////一个点类（Point），
////计算点和圆的关系
////点到圆心距离与半径比较，圆上圆外圆内
//
//
////点类
////class Point
////{
////public:
////	//设置x坐标
////	void setX(int a)
////	{
////		p_x = a;
////	}
////	//设置y坐标
////	void setY(int a)
////	{
////		p_y = a;
////	}
////
////	//获取x坐标
////	int getX()
////	{
////		return p_x;
////	}
////
////	//获取y坐标
////	int getY()
////	{
////		return p_y;
////	}
////
////private:
////	//设置坐标
////	int p_x;
////	int p_y;
////
////};
//
//
//////圆类
////class Circle
////{
////public:
////
////	//设置圆心
////	void setCenter(Point c)
////	{
////		c_center = c;
////	}
////
////	//获取圆心
////	Point getCenter()
////	{
////		return c_center;
////	}
////
////
////	//设置半径
////	void setRedius(int r)
////	{
////		c_redius = r;
////	}
////
////
////	//获取半径
////	int getRedius()
////	{
////		return c_redius;
////	}
////
////
////private:
////	//圆心坐标
////	//在类中可以让另一个类作为本来成员存在
////	Point c_center;
////
////	//半径
////	int c_redius;
////
////};
//
////计算点到圆心距离并判断
//
//void  isInCircle(Circle& c, Point& p)
//{
//	//计算两点之间的距离平方
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//计算半径的平方
//	int rDistance =
//		c.getRedius() * c.getRedius();
//
//
//	//判断关系
//	if (distance = rDistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else
//	{
//		if (distance > rDistance)
//		{
//			cout << "点在圆外" << endl;
//		}
//		else
//		{
//			cout << "点在圆内" << endl;
//		}
//	}
//}
//
//
//
//int main()
//{
//	//实例化点
//	Point p;
//
//	//给点赋值
//	p.setX(3);
//	p.setY(5);
//
//	//点坐标输出
//	cout << "点x：" << p.getX() << endl;
//	cout << "点y：" << p.getY() << endl;
//
//
//
//	//实例化圆
//	Circle c;
//
//	//给圆心赋值
//	Point center;
//	center.setX(3);
//	center.setY(5);
//
//	c.setRedius(20);
//
//	//圆值输出
//	cout << "圆心x：" << center.getX() << endl;
//	cout << "圆心y：" << center.getY() << endl;
//	cout << "圆半径：" << c.getRedius() << endl;
//
//
//	//点到圆心距离
//
//	isInCircle(c, p);
//
//
//
//
//	return 0;
//}