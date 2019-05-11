#include<iostream>
using namespace std;
void find_sub(int n, int a[])
{
	int num = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == i)
		{
			cout << i << endl;
			break;
		}
		num++;
	}
	if(num == n)
		cout << 'N' << endl;
}

int main()
{
	int n;
	int a[100] = {0};
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		find_sub(n, a);
	}
	return 0;
}