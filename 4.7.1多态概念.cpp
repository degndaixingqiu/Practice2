//#include <iostream>
//using namespace std;
//
////��̬��������
//
////������
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//
////è��
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è�ڽ�" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "���ڽ�" << endl;
//	}
//};
//
//
////ִ��˵������
////��ַ��󶨣��ڱ���׶�ȷ��������ַ
////����ִ����è˵������˺�����ַ������ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬����������
////1. �м̳й�ϵ
////2. ����Ҫ��д�����麯��
//// ����д�Ǻ�������ֵ���ͣ��������ƣ������б�Ҫ��ȫ��ͬ��
//
////��̬��̬����
//// ����ָ��������ã�ָ���������
//
//
//
//void doSpeak(Animal &animal) //Animal &animal = cat;
//{
//	animal.speak();
//}
//
//void test1()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//
//	test1();
//
//
//
//	return 0;
//}