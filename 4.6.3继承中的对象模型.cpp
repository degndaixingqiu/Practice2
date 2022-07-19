//#include <iostream>
//using namespace std;
//
////继承中的对象模型
//
//class Base
//{
//public:
//	int m_A;
//
//private:
//	int m_B;
//
//protected:
//	int m_C;
//
//};
//
//class Son:public Base
//{
//public:
//	int m_D;
//
//};
//
//void test01()
//{
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性，是被编译器隐藏了，只是访问不到
//	Son S1;
//	cout << "size of Son" << sizeof(S1) << endl;
//}
//
////利用Developer PowerShell v16.11.5查看对象模型
////右键文件名处，找到文件所在位置
////跳转盘符：E:
////跳转文件路径：cd 粘贴具体路径下
////查看命名
////输入cl /d1 reportSingleClassLayoutSon，空格输入4.6.3 Tab自动补全名字
////回车即可显示对象模型
//
//int main()
//{
//	test01();
//
//
//
//
//
//	return 0;
//}