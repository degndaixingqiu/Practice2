//#include <iostream>
//using namespace std;
//
////��������������
//
////��������
////1. ֵ���ݡ�
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
////2. ��ַ����
//void swap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////3. ���ô���
//void swap3(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	swap(a, b);//ֵ���ݣ��ββ�������ʵ��
//	cout << "ֵ����a= " << a << endl;
//	cout << "ֵ����b=" << b << endl;
//
//
//	swap2(&a, &b);//��ַ���ݣ��βλ�ı�ʵ��
//	cout << "��ַ����a= " << a << endl;
//	cout << "��ַ����b=" << b << endl;
//
//
//	swap3(a, b);//���ô��ݣ��βλ�ı�ʵ��
//	cout << "���ô���a= " << a << endl;
//	cout << "���ô���b=" << b << endl;
//
//
//
//	return 0;
//}