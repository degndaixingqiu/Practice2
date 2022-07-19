//#include <iostream>
//using namespace std;
////空指针调用成员函数
//
//
//class Person
//{
//public:
//
//	//未用到this指针，空指针调用函数顺利
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		//下列If防止传空指针
//		if (this == NULL)
//		{
//			return;
//		}
//		//报错原因是传入指针为NULL，m_Age这里实则为this->m_Age
//		//但下面初始化的this指向空，所以并没有具体指向，报错
//		cout << "age" << m_Age << endl;
//	}
//
//	int m_Age;
//
//
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//	p->showPersonAge();
//}
//
//
//int main()
//{
//
//
//	test01();
//
//
//
//
//	return 0;
//}