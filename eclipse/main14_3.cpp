#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int a[21][21] = {0};
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	
	for(int i = 0; i < m ; i++)
	{
		for(int j = 0;  j < n; j++)
		{
			if(i == 0 && j == 0)
			{
				if(a[0][0] >= a[0][1] && a[0][0] >= a[1][0])
				{
					cout << i << ' ' << j<< endl;
				}
			}
			else if(i == 0 && j == n-1)
			{
				if(a[0][n - 1] >= a[0][n - 2] && a[0][n-1] >= a[1][n - 1])
				{
					cout << i << ' ' << j << endl;
				}
			}
			else if(i == m - 1 && j == 0)
			{
				if(a[m - 1][0] >= a[m-2][0] && a[m-1][0] >= a[m-1][1])
				{
					cout << i << ' ' << j << endl; 
				}
			}
			else if(i == m - 1 && j == n - 1)
			{
				if(a[m - 1][n-1] >= a[m-2][n-1] && a[m-1][n-1] >= a[m-1][n-2])
				{
					cout << i << ' ' << j << endl; 
				}
			}
			else if( i == 0)
			{
				if(a[0][j] >= a[0][j-1] &&a[0][j] >= a[0][j+1]&&a[0][j] >= a[1][j])
				{
					cout << i << ' ' << j << endl; 
				}
			}
			else if( i == m - 1)
			{
				if(a[m - 1][j] >= a[m - 1][j-1] &&a[m - 1][j] >= a[m - 1][j+1]&&a[m - 1][j] >= a[m - 2][j])
				{
					cout << i << ' ' << j << endl; 
				}
			}
			else if( j == 0)
			{
				if(a[i][0]>=a[i][1]&&a[i][0] >= a[i-1][0]&&a[i][0] >= a[i+1][0])
				{
					cout << i << ' ' << j << endl;
				}
			}
			else if( j == n-1)
			{
				if(a[i][n-1]>=a[i][n-2]&&a[i][n-1] >= a[i-1][n-1]&&a[i][n-1] >= a[i+1][n-1])
				{
					cout << i << ' ' << j << endl;
				}
			}
			else
			{
				if(a[i][j] > a[i-1][j] &&a[i][j] > a[i+1][j]&&a[i][j] > a[i][j-1]&&a[i][j] > a[i][j+1])
				{
					cout << i << ' ' << j << endl;
				}
			}
		}
	}
	return 0;
}