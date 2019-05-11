#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	int s[n + m] = {0};
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	int num = 0;

	for(int j = n-1; j >=0; j--)
	{
		s[j + m] = s[j];
	}

	for(int k = 0; k < m; k++)
	{
		s[k] = s[k+n];
	}

	for(int l = 0; l < n; l++)
	{
		cout<<s[l]<<" ";
	}
	cout << endl;
	return 0;
}