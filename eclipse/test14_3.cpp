#include<iostream>
using namespace std;

int *getInt1()
{
	static int value1 = 20;
	return &value1;
}

int *getInt2()
{
	static int value2 = 30;
	return &value2;
}

int main()
{
	int *p;
	int *q;
	p = getInt1();
	q = getInt2();
	cout << *p << endl;
	return 0;
}