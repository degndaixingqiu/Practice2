//#include <iostream>
//using namespace std;
//
////1. new�����﷨
//int* func()
//{
//	//�ڶ���������������
//	int* p = new int(10);
//	return p;
//}
//
////2. �ڶ�����������
//void test02()
//{
//	//����10�������ݵ����飬�ڶ���
//	int* arr = new int[10];//������10������
//	
//	//��ֵ
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//
//	}
//
//	//��ӡ
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	//�ͷŶ�������
//	//�ͷ�����Ҫ��[]������������
//	delete[]arr;
//}
//
//
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//���������ɳ���Ա��������
//	//�����ͷţ���delete
//	delete p;
//
//	//cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη����ǷǷ��������ᱨ��
//
//	test02();
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}