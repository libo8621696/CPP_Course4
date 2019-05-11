#include<iostream>
#include<memory.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
int N;
int L;
vector<int> anLength;
int anUsed[65]; //是否用过的标记
int i, j, k;
int Dfs(int R, int M);

int main()
{
	while(1)
	{
		cin >> N;
		if(N == 0)
			break;
		int nTotalLen = 0;
		anLength.clear();
		for(int i = 0; i < N; i++)
		{
			int n;
			cin >> n;
			anLength.push_back(n);
			nTotalLen += anLength[i];
		}
		sort(anLength.begin(), anLength.end(), greater<int>()); // 要从长到短进行尝试
		for(L = anLength[0]; L <= nTotalLen/2; L++)
		{
			if(nTotalLen % L)
				continue;
			memset(anUsed, 0, sizeof(anUsed));
			if(Dfs(N,L))
			{
				cout << L << endl;
				break;
			}
		}
		if(L > nTotalLen / 2)
			cout << nTotalLen << endl;
	}
	return 0;
}


/*
// 未进行剪枝的深搜函数
int Dfs(int R, int M)
{
	// M表示当前正在拼的棍子和L比还缺的长度
	if(R == 0 && M == 0)
		return true;
	if(M == 0) // 一根刚刚拼完
		M = L; // 开始拼新的一根
	for(int i = 0; i < N; i++)
	{
		if(!anUsed[i] && anLength[i] <= M)
		{
			anUsed[i] = 1;
			if(Dfs(R - 1, M - anLength[i]))
				return true;
			else
				anUsed[i] = 0; // 说明本次不能使用第i根，第i根以后还有用
		}
	}
	return false;
}
*/


// 采用剪枝1方法的深搜函数
int Dfs(int R, int M)
{
	// M表示当前正在拼的棍子和L比还缺的长度
	if(R == 0 && M == 0)
		return true;
	if(M == 0) // 一根刚刚拼完
		M = L; // 开始拼新的一根
	for(int i = 0; i < N; i++)
	{
		if(!anUsed[i] && anLength[i] <= M)
		{
			if(i > 0)
			{
				if(anUsed[i - 1] == false && anLength[i] == anLength[i - 1])
					continue;  //剪枝1
			}
			anUsed[i] = 1;
			if(Dfs(R - 1, M - anLength[i]))
				return true;
			else
			{
				anUsed[i] = 0; // 说明本次不能使用第i根，第i根以后还有用
				if(M == L)
					return false;  //剪枝2
			}

		}
	}
	return false;
}

/*

// 采取剪枝1，2，3，4的深搜算法
int Dfs(int nUnusedSticks, int nLeft)
{
	// nLeft表示当前正在拼的棍子和L比还缺的长度
	if(nUnusedSticks == 0 && nLeft == 0)
		return true;
	if(nLeft == 0) // 一根刚刚拼完
		nLeft = L; // 开始拼新的一根
	int nStartNo = 0;
	if(nLeft != L)//剪枝4
		nStartNo = nLastStickNo + 1;

	for(int i = nStartNo; i < N; i++)
	{
		if(!anUsed[i] && anLength[i] <= M)
		{
			if(i > 0)
			{
				if(anUsed[i - 1] == false && anLength[i] == anLength[i - 1])
					continue;  //剪枝1
			}
			anUsed[i] = 1;
			nLastStickNo = i;
			if(Dfs(nUnusedSticks - 1, nLeft - anLength[i]))
				return true;
			else
			{
				anUsed[i] = 0; // 说明本次不能使用第i根，第i根以后还有用
				if(anLength[i] == nLeft || nLeft == L)
					return false;  //剪枝3,2
			}

		}
	}
	return false;
}

*/