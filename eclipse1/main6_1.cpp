#include<iostream>
#include<cstring>
using namespace std;

int programs;  //方案数(全局变量)
char chessboard[9][9];
int chessUsedY[9];
int n,k;

void dfs(int row, int kk) // row 表示第row行，kk表示剩余棋子数
{
	if(n - row + 1 < kk) //剪枝，剩余行数小于棋子数，方案失败
		return;
	if(row > n && kk > 0) // 失败方案。行数row已经越界，可能出现这种情况的，因为有的行没有放棋子
		return;
	if(kk == 0)
	{
		programs++;
		return;
	}

	for(int i = 1; i <= n; i++)
	{
		if(chessUsedY[i] == 0 && chessboard[row][i] =='#')
		{
			chessUsedY[i] = 1;
			dfs(row + 1, kk - 1); // 第row行放棋子的情况，此时棋子未放完，继续递归深搜
			chessUsedY[i] = 0; // 调用上一个dfs(row + 1, kk - 1) 函数时chessUsedY[i]=1; 淡水调用结束后chessUsedY[i] = 0;;
		}
	}
	dfs(row + 1, kk);  // 第row行不放棋子的情况
}

int main()
{
	while(cin >> n >> k)
	{
		if(n == -1 && k == -1)
			break;
		programs = 0;
		memset(chessUsedY, 0, sizeof(chessUsedY)); // 未使用的区域为0, 使用过的区域为1

		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> chessboard[i][j];
			}
		}

		dfs(1, k);

		cout << programs << endl;
	}
	return 0;
}