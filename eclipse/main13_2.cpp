#include<iostream>
using namespace std;
int main()
{
	int row = 0, col = 0;
	cin >> row >> col;
	int a[101][101] = {0};
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}

	int kk = row + col - 1;
	for(int k = 0; k < kk; k++)
	{
		for(int i = 0; i < row; i++)
		{
			for(int j = col - 1; j >= 0; j--)
			{
				if(i + j == k)
				{
					cout << a[i][j] << endl;
				}
			}
		}
	}

	return 0;
}