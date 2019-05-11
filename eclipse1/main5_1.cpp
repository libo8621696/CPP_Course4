#include<iostream>
#include<cstring>
using namespace std;

// 全局变量R[251][251]，动态规划的精髓
long long R[251][251];  //记录数字N的以不小于m开头的单峰回文串数

int main()
{
	int N;
	memset(R, 0, sizeof(R)); 
	for(int i = 1; i <= 250; ++i)
	{
		R[i][i]= 1;  //数字n以n开头则只有一种情况，也是递推的种植条件
		if(i%2 == 0)
		{
			R[i][i / 2] = 1;  //偶数n以n/2开头则也只有一种情况，也是递推的终止条件
		}
		for(int j = 1; i - 2 * j >= j; ++j)//此处k要从j处开始循环
		{
			for(int k = j; i - 2 * j >= k; ++k)
			{
				R[i][j] += R[i - 2*j][k];
			}
		}
	}

	while(cin >> N)
	{
		if(N == 0)
			break;
		long long sum = 0;
		for(int i = 1; i <= N; ++i)
			sum += R[N][i];
		cout << N << " " << sum << endl;
	}

	return 0;
}