//#include <iostream>
//using namespace std;
//
////const���γ�Ա����
////������
//
////������
//
//class Person
//{
//public:
//	//������
//	//thisָ�뱾��  ��ָ�볣��  ָ���ָ�򲻿��޸�
//	//Person * const this;
//	//�ڳ�Ա�������const,����thisָ�룬��ָ��ָ���ֵҲ�����޸� 
//	void showPerson() const
//	{
//		//this->m_A = 100;
//
//		this->m_B = 100;//mutable�������޸�
//
//		//this = NULL;//thisָ�벻���޸�ָ��
//	}
//
//
//	void func()
//	{
//
//	}
//
//
//
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ����mutable
//};
//
//
////������
//
//void test02()
//{
//	const Person p;//�ڶ���ǰ��const,��Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
//
//
//	//������ֻ���ó�����
//	p.showPerson();
//	//p.func(); �����󲻿ɵ�����ͨ��Ա��������Ϊ��ͨ��Ա�������޸�����
//
//}
//int main()
//{
//
//
//
//	return 0;
//}