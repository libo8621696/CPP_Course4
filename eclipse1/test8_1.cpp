#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
short rowFlags[9][10]; // rowFlag[i][num] = 1 表示在第i行已经放了数字num
short colFlags[9][10]; // colFlag[i][num] = 1 表示在第i行已经放了数字num
short blockFlags[9][10]; // blockFlag[i][num] = 1 表示在第i个块已经放了数字num
int board[9][9]; // 整个棋盘
struct Pos
{
	int r, c;
	Pos(int rr, int cc):r(rr),c(cc){}
};
vector<Pos> blankPos; // 所有空白格的位置
inline int GetBlockNum(int r, int c) // 由行，列号求小块号
{
	int rr = r / 3;
	int cc = c / 3;
	return rr * 3 + cc;
}
void SetAllFlags(int i, int j, int num, int f)
{
	// 把num放在(i,j)位置,设置相应标记，或从(i,j)取走num，清除相应标记
	rowFlags[i][num] = f;
	colFlags[j][num] = f;
	blockFlags[GetBlockNum(i,j)][num] = f;
}
bool IsOk(int i, int j, int num)
{
	// 看num能否放在i,j位置
	return !rowFlags[i][num] && !colFlags[j][num] && !blockFlags[GetBlockNum(i,j)][num]; 
}
bool Dfs(int n)
{
	// 处理前n个空格 
	if( n < 0 )
		return true;
	int r = blankPos[n].r;
	int c = blankPos[n].c;
	for(int num = 1; num <= 9; ++num)
	{
		if(IsOk(r, c, num))
		{
			board[r][c] = num;
			SetAllFlags(r, c, num, 1);
			if(Dfs(n-1))
				return true;
			SetAllFlags(r, c, num, 0);
		}
	}
	return false;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(rowFlags, 0, sizeof(rowFlags));
		memset(colFlags, 0, sizeof(colFlags));
		memset(blockFlags, 0, sizeof(blockFlags));
		blankPos.clear();
		for(int i = 0; i < 9; ++i)
		{
			for(int j = 0; j < 9; ++j)
			{
				char c;
				cin >> c;
				board[i][j] = c - '0';
				if(board[i][j])
					SetAllFlags(i, j, board[i][j], 1);
				else
					blankPos.push_back(Pos(i,j));
			}
			if(Dfs(blankPos.size() - 1))
			{
				//倒着搜比较快，正着搜就慢，数据问题
				for(int i = 0; i < 9; ++i)
				{
					for(int j = 0; j < 9; ++j)
					{
						cout << char(board[i][j] + '0');
					}
					cout << endl;
				}
			}
		}
	}
}