#pragma once
//��ֹͷ�ļ��ظ�����

#include <iostream>
using namespace std;

//��������
class Point
{
public:
	//����x����
	void setX(int a);
	//����y����
	void setY(int a);

	//��ȡx����
	int getX();

	//��ȡy����
	int getY();

private:
	//��������
	int p_x;
	int p_y;

};
