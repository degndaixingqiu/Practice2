//#include <iostream>
//using namespace std;
//
////this ָ��
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ��  �����õĳ�Ա����  �����Ķ���
//		//Ҳ����p1
//		this->age = age;
//	}
//
//
//	//����ֵ�ķ�ʽ���أ���ϵͳ�´��������µ�class����ԭclass��ֻͬ��ֵһ��
//	//���÷�ʽ���أ��򲻻ᴴ���¶���һֱ����ԭ����
//	Person& PersonAddAge(Person &p)
//	{
//		//p����͵��ö���������� 
//		this->age += p.age;
//		
//		//*this���ص��ǵ��øú�������
//		return *this;
//	}
//
//
//
//	~Person()
//	{
//
//	}
//
//
//	int age;
//
//
//};
//
//
////1. ������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "p1����Ϊ��" << p1.age << endl;
//}
//
//
////2. ���ص��ú�����������*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2����" << p2.age << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	test02();
//
//
//
//
//
//
//	return 0;
//}