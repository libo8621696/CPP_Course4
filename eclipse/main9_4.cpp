#include<iostream>
#include<iomanip>
using namespace std;
#define N 5
#define M 5
int main()
{
	int matrix[N][M];  //定义N*M矩阵
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int n, m;
	cin >> n >> m;

	//如果输入的行在矩阵中，则交换
	if(n>=0 && n<N && m>=0 && m<N)
	{
		for(int k = 0; k < M; k++)
		{
			swap(matrix[n][k], matrix[m][k]);
		}

		// 输出交换后的矩阵
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<M; j++)
			{
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;
		}
	}
	else
		cout << "error" << endl;
	return 0;
}