#include<iostream>
using namespace std;
void change(int c, int d)
{
	c = 30; d = 50;
}

int main()
{
	int a = 3, b = 5;
	change(a, b);
	cout << a << " " << b << endl;
	return 0;
}