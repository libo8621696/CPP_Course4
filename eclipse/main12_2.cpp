#include<iostream>
using namespace std;
int n = 0; 
int calc()
{
	if(n == 1)
	{
		cout << "End" << endl;
		return 1;
	}
	else
	{
		if(n % 2)
		{
			int temp = n;
			n *= 3;
			n += 1;
			cout << temp << '*' << 3 << '+' << 1 << '=' << n << endl;
			return calc();
		}
		else
		{
			int temp = n;
			n /= 2;
			cout << temp << '/' << 2 << '=' << n << endl;
			return calc();
		}
	}
}

int main()
{
	while(cin >> n)
	{
		calc();
	}
	return 0;
}