//#include <iostream>
//#include <string>
//#include <math.h>
//#include "point.h"
//#include "circle.h"
//using namespace std;
////���һ��Բ���ࣨCircle)
////һ�����ࣨPoint����
////������Բ�Ĺ�ϵ
////�㵽Բ�ľ�����뾶�Ƚϣ�Բ��Բ��Բ��
//
//
////����
////class Point
////{
////public:
////	//����x����
////	void setX(int a)
////	{
////		p_x = a;
////	}
////	//����y����
////	void setY(int a)
////	{
////		p_y = a;
////	}
////
////	//��ȡx����
////	int getX()
////	{
////		return p_x;
////	}
////
////	//��ȡy����
////	int getY()
////	{
////		return p_y;
////	}
////
////private:
////	//��������
////	int p_x;
////	int p_y;
////
////};
//
//
//////Բ��
////class Circle
////{
////public:
////
////	//����Բ��
////	void setCenter(Point c)
////	{
////		c_center = c;
////	}
////
////	//��ȡԲ��
////	Point getCenter()
////	{
////		return c_center;
////	}
////
////
////	//���ð뾶
////	void setRedius(int r)
////	{
////		c_redius = r;
////	}
////
////
////	//��ȡ�뾶
////	int getRedius()
////	{
////		return c_redius;
////	}
////
////
////private:
////	//Բ������
////	//�����п�������һ������Ϊ������Ա����
////	Point c_center;
////
////	//�뾶
////	int c_redius;
////
////};
//
////����㵽Բ�ľ��벢�ж�
//
//void  isInCircle(Circle& c, Point& p)
//{
//	//��������֮��ľ���ƽ��
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//����뾶��ƽ��
//	int rDistance =
//		c.getRedius() * c.getRedius();
//
//
//	//�жϹ�ϵ
//	if (distance = rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		if (distance > rDistance)
//		{
//			cout << "����Բ��" << endl;
//		}
//		else
//		{
//			cout << "����Բ��" << endl;
//		}
//	}
//}
//
//
//
//int main()
//{
//	//ʵ������
//	Point p;
//
//	//���㸳ֵ
//	p.setX(3);
//	p.setY(5);
//
//	//���������
//	cout << "��x��" << p.getX() << endl;
//	cout << "��y��" << p.getY() << endl;
//
//
//
//	//ʵ����Բ
//	Circle c;
//
//	//��Բ�ĸ�ֵ
//	Point center;
//	center.setX(3);
//	center.setY(5);
//
//	c.setRedius(20);
//
//	//Բֵ���
//	cout << "Բ��x��" << center.getX() << endl;
//	cout << "Բ��y��" << center.getY() << endl;
//	cout << "Բ�뾶��" << c.getRedius() << endl;
//
//
//	//�㵽Բ�ľ���
//
//	isInCircle(c, p);
//
//
//
//
//	return 0;
//}