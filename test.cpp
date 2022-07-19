#include <iostream>
using namespace std;

int main()
{

	int a[3] = { 1,2,3 };

	int* p = a;

	for (int i = 0; i < 3; i++)
	{
		cout << *p;
		p++;
	}




	return 0;
}