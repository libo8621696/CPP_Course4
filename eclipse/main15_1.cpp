#include<iostream>
using namespace std;
int main()
{
	int m = 0, k = 0, count = 0;
	cin >> m >> k;
	int a[5];
	for(int i = 0; i < 5; i++)
	{
		a[4-i] = m%10;
		m/=10;
	}
	for(int i = 0; i < 5; i++)
	{
		if(a[i] == k)
		{
			count++;
		}
	}
	if((m%19==0)&&(count==k))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout <<"NO"<<endl;
	}

	return 0;
}