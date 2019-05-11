#include<iostream>
using namespace std;
void convert(int x )
{
	if((x / 2) != 0)
	{
		convert(x / 2);
		cout << x % 2;
	}
	else
	{
		cout << x;
	}
}

int main()
{
	int x;
	cin >> x;
	convert(x);
	cout << endl;
	return 0;
}