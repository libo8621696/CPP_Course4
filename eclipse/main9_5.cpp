#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	int count = 0;
	int matrix[N][N];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for(int i = 1; i < N - 1; i++)
	{
		for(int j = 1; j < N - 1; j++)
		{
			if(matrix[i-1][j]-matrix[i][j] >= 50 
			   && matrix[i][j-1]-matrix[i][j] >= 50
			   && matrix[i+1][j]-matrix[i][j] >= 50
			   && matrix[i][j+1]-matrix[i][j] >= 50)
			{
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}