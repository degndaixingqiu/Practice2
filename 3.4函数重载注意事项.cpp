//#include <iostream>
//using namespace std;
//
////��������
//
////1. ������Ϊ������������
//void func(int &a)//�β�������
//{
//
//	cout << "func����" << endl;
//}
//
//void func(const int& a)//�β��ǳ�������
//{
//
//	cout << "func(const)����" << endl;
//}
//
//
////2. ����������������Ĭ�ϲ���
//void func2(int a)
//{
//
//	cout << "func2(int a)����" << endl;
//}
//
//void func2(int a,int b = 10)
//{
//
//	cout << "func(const)����" << endl;
//}
//
//
//int main()
//{
//	int a = 10;
//	func(a);
//
//	func(20);
//
//
//	//func2(1);//�������ɵ��ã����ֶ����ԣ�����������������
//	func2(1, 2);//��ȷ���ص��������βεĺ���
//
//	return 0;
//}