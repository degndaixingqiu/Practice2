#pragma once
//防止头文件重复包含

#include <iostream>
using namespace std;

//点类声明
class Point
{
public:
	//设置x坐标
	void setX(int a);
	//设置y坐标
	void setY(int a);

	//获取x坐标
	int getX();

	//获取y坐标
	int getY();

private:
	//设置坐标
	int p_x;
	int p_y;

};
