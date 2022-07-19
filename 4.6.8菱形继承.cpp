//#include <iostream>
//using namespace std;
//
////菱形继承
//
////动物类
//class Animal
//{
//public:
//	int m_Age;
//};
//
////利用虚继承，可以解决菱形继承问题
////在继承之前加关键字：virtual，变为虚继承
//// Animal称为虚基类
//
////羊类
//class Sheep :virtual public Animal
//{
//
//};
//
////驼类
//class Tuo :virtual public Animal
//{
//
//};
//
////羊驼类
//class SheepTuo :public Sheep, public Tuo
//{
//	
//};
//
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//
//	st.Tuo::m_Age = 28;
//
//	//当出现菱形继承时，两个父类拥有相同数据，加以作用域区分即可
//	cout << "st.Sheep::m_Age " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age " << st.Tuo::m_Age << endl;
//
//	//数据只有一个，就算这样访问也不会出现不明确的情况
//	cout << "st.m_Age " << st.m_Age << endl;
//
//	//这份数据只要有一份即可，菱形继承造成数据有两份，浪费
//
//}
//
//
//
//int main()
//{
//	test01();
//
//
//
//
//	return 0;
//}