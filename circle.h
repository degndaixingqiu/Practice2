#pragma once
#include <iostream>
#include "point.h"
using namespace std;

//Բ����
//Բ��
class Circle
{
public:

	//����Բ��
	void setCenter(Point c);

	//��ȡԲ��
	Point getCenter();


	//���ð뾶
	void setRedius(int r);


	//��ȡ�뾶
	int getRedius();


private:
	//Բ������
	//�����п�������һ������Ϊ������Ա����
	Point c_center;

	//�뾶
	int c_redius;

};