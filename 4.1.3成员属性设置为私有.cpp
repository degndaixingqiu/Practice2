//#include <iostream>
//#include <string>
//using namespace std;
//
////��Ա��������Ϊ˽��
////1. ���ƶ�дȨ��
////2. ����д�����������Ч��
//
////�������
//class Person
//{
//	//��������Ϊ˽�л����ö���ӿڷ�������
//
//public:
//	//�޸�����
//	void setName(string a)
//	{
//		m_Name = a;
//	}
//
//	//��ȡ����
//	//��д���غ���
//	string getName()
//	{
//		return m_Name;
//	}
//
//
//	//��ȡ���� �ɶ���д�����ı�����0-150֮��
//	int getAge()
//	{
//		//m_age = 2;
//		return m_age;
//	}
//
//	//��������
//	void setAge(int age)
//	{
//		if (age > 0 && age < 100)
//		{
//			m_age = age;
//		}
//		else
//		{
//			m_age = 0;
//			cout << "������������" << endl;
//		}
//	}
//
//	//��ȡ�
//	void setPartner(string love)
//	{
//		m_partner = love;
//	}
//
//private:
//	//���� �ɶ���д
//	string m_Name;
//
//	//���� ֻ��
//	int m_age;
//
//	//� ֻд
//	string m_partner = "��";
//
//};
//
//
//
//
//int main()
//{
//	Person p1;
//	
//	//���ô�ӡ����
//	p1.setName("����");
//	cout << p1.getName() << endl;
//
//	//��ӡ����
//	p1.setAge(150);
//	cout << "����Ϊ" << p1.getAge() << endl;
//
//	p1.setAge(30);
//	cout << "����Ϊ" << p1.getAge() << endl;
//
//	//���ô,ֻд���ɷ���
//	p1.setPartner("wangwu");
//
//
//	return 0;
//}