//#include <iostream>
//#include <string>
//using namespace std;
////�����������(Cube)
////������������������
////�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
//
//
////��������
//class Cube
//{
//public:
//	//���ñ߳�
//	void setSide(int a)
//	{
//		m_side = a;
//	}
//
//	//��ȡ�߳�
//	int getSide()
//	{
//		return m_side;
//	}
//
//	//�������������
//	int calArea()
//	{
//		return m_side * m_side * 6;
//	}
//
//	//�������������
//	int calBulk()
//	{
//		return m_side * m_side * m_side;
//	}
//
//	//�ж������������Ƿ����
//	//��֪������ú�����ֻ����һ����������
//	void cubeSame(Cube c1)
//	{
//		if (m_side == c1.m_side)
//		{
//			cout << "�����������" << endl;
//		}
//		else
//		{
//			cout << "�������岻��" << endl;
//		}
//	}
//
//private:
//	//�߳�
//	int m_side;
//
//};
//
////����ȫ�ֺ���
//void allSame(Cube & c1, Cube & c2)
//{
//	if (c1.getSide() == c2.getSide())
//	{
//		cout << "�����������" << endl;
//	}
//
//	else
//	{
//		cout << "�������岻��" << endl;
//	}
//}
//
//int main()
//{
//	//ʵ����������
//	Cube c1,c2;
//	c1.setSide(3);
//	c2.setSide(5);
//
//	cout << "��һ��������߳�Ϊ" << c1.getSide() << endl;
//	cout << "�ڶ���������߳�Ϊ" << c2.getSide() << endl;
//
//	//��������
//	cout << "���������Ϊ" << c1.calArea() << endl;
//	cout << "���������Ϊ" << c1.calBulk() << endl;
//
//	//��Ա�����ж��Ƿ����
//	c1.cubeSame(c2);
//
//	//ȫ�ֺ����ж��Ƿ����
//	allSame(c1, c2);
//	
//
//
//	return 0;
//}