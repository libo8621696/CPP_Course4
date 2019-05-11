#include<iostream>
#include<cmath>
using namespace std;
bool checkPrime(int);
int main()
{
	int a;cout << "请输入一个整数" << endl;
	while(cin >> a)
	{
		if(checkPrime(a))
		{
			cout << "是质数" << endl;
		}
		else
		{
			cout << "不是质数" << endl;
		}
	}
	return 0;
}

bool checkPrime(int number)
{
	int i, k;
	k = sqrt(number);
	for(i = 2; i<=k; k++)
	{
		if(number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

