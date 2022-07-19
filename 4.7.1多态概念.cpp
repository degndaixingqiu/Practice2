//#include <iostream>
//using namespace std;
//
////多态基本概念
//
////动物类
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//
////猫类
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在叫" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在叫" << endl;
//	}
//};
//
//
////执行说话函数
////地址早绑定，在编译阶段确定函数地址
////若想执行让猫说话，则此函数地址不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//
////动态多态满足条件：
////1. 有继承关系
////2. 子类要重写父类虚函数
//// （重写是函数返回值类型，函数名称，参数列表要完全相同）
//
////动态多态调用
//// 父类指针或者引用，指向子类对象
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