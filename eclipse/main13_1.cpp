#include<iostream>
using namespace std;
int main()
{
	int a[90][90] = {0};
	int k, m, n, sum[1000] ={0};
	int kk;
	int (*p)[90] = a;
	cin >> k;
	kk = k;

	while(k--)
	{
		cin >> m >> n;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> *(*(p + i) + j);
			}
		}

		int i = 0;
		for(int j = 0; j < n; j++)
		{
			sum[k] += *(*(p + i) + j);
		}

		i = m - 1;
		for(int j = 0; j < n; j++)
		{
			sum[k] += *(*(p + i) + j);
		}

		int j = 0;
		for(int i = 1; i < m - 1; i++)
		{
			sum[k] += *(*(p + i) + j);
		}

		j = n - 1;
		for(int i = 1; i < m - 1; i++)
		{
			sum[k] += *(*(p + i) + j);
		}

	}

	k = kk;
	while(k--)
	{
		cout << sum[k] << endl;
	}

	return 0;
}