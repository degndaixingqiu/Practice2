//#include <iostream>
//using namespace std;
//
////�������캯������
//
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//
//	Person(int a)
//	{
//		age = a;
//		cout << "Person�вι��캯������" << endl;
//	}
//
//
//	//�������캯��
//	//������class������const��������
//	Person(const Person& p)
//	{
//		//���������������ԣ�������������
//		age = p.age;
//		cout << "Person�������캯������" << endl;
//	}
//
//
//
//
//	//��������
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int age;
//
//};
//
//
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//
//	cout << "p1���䣺" << p1.age << endl;
//	cout << "p2���䣺" << p2.age << endl;
//
//}
//
////2. ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p3;//����Ĭ�Ϲ���
//	doWork(p3);//���ÿ�������
//
//}
//
////3. ��ֵ��ʽ���ؾֲ�����
//Person doWork02()
//{
//	//�����ǽ�p4ֵ���ظ�p5
//	//����returnʱϵͳʹ�ÿ������캯���������µ���ʱ��class���ٸ�p5
//	Person p4;//�˴�����һ��Ĭ�Ϲ���+����
//	cout << &p4 << endl;
//	return p4;//�˴����ÿ�������
//}
//
//
//
//void test03()
//{
//	Person p5 = doWork02();//�˴���һ������������������test03����֮���ͷ�p5
//	cout << &p5 << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	test02();
//
//	test03();
//
//
//
//
//	return 0;
//}