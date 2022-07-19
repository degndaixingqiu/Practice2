#pragma once
#include <iostream>
#include "point.h"
using namespace std;

//圆声明
//圆类
class Circle
{
public:

	//设置圆心
	void setCenter(Point c);

	//获取圆心
	Point getCenter();


	//设置半径
	void setRedius(int r);


	//获取半径
	int getRedius();


private:
	//圆心坐标
	//在类中可以让另一个类作为本来成员存在
	Point c_center;

	//半径
	int c_redius;

};