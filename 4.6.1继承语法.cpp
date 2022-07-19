//#include <iostream>
//using namespace std;
//
////普通页面实现
//
////继承实现页面
//
////公共页面
//class Base
//{
//public:
//	void header()
//	{
//		cout << "首页，登录……（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "java,python(公共分类列表)" << endl;
//	}
//};
//
//
////继承好处：减少重复代码
//// 语法：class 子类：继承方式 父类
//// 子类：也称为 派生类
//// 父类：也称为 基类
//
//
////Java页面
//class Java :public Base
//{
//public:
//	void content()
//	{
//		cout << "java 学科列表" << endl;
//	}
//};
//
//
////Python页面
//class Python :public Base
//{
//public:
//	void content()
//	{
//		cout << "Python 学科列表" << endl;
//	}
//};
//
//
////CPP页面
//class CPP :public Base
//{
//public:
//	void content()
//	{
//		cout << "CPP 学科列表" << endl;
//	}
//};
//
//
////java页面测试
//void test01()
//{
//	cout << "Java" << endl;
//	Java J;
//	J.content();
//	J.footer();
//	J.header();
//	J.left();
//
//	cout << "--------------" << endl;
//}
//
//
////python页面测试
//void test02()
//{
//	cout << "Python" << endl;
//	Python P;
//	P.content();
//	P.footer();
//	P.header();
//	P.left();
//
//	cout << "--------------" << endl;
//}
//
//
////cpp页面测试
//void test03()
//{
//	cout << "CPP" << endl;
//	CPP C;
//	C.content();
//	C.footer();
//	C.header();
//	C.left();
//
//	cout << "--------------" << endl;
//}
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
//
//	return 0;
//}