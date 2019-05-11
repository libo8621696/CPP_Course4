#include<iostream>
#define Maxn 30
using namespace std;
 
int n, h;
int f[Maxn];
int d[Maxn];
int t[Maxn];
int ans[Maxn];
int cas;
int main()
{
	//freopen("1.txt", "r", stdin);
	while (~scanf("%d", &n) && n)
	{
		cin >> h;
		h *= 12;
		for (int i = 1; i <= n; i++)
			cin >> f[i];
		for (int i = 1; i <= n; i++)
			cin >> d[i];
		for (int i = 1; i < n; i++)
			cin >> t[i];
		int maxn = 0;
		int times;
		if (cas > 0)
			cout << endl;
		cas++;
		for (int end = 1; end <= n; end++)//枚举终点
		{
			times = h;
			int num = 0;//每次终点不同的鱼量
			int tmp[Maxn] = { 0 };//临时存储不同终点情况下每个湖的鱼量
			int ft[Maxn] = { 0 };//临时存储一下1~end湖中的鱼
			for (int i = 1; i <= end; i++)
				ft[i] = f[i];
			for (int i = 1; i < end; i++)//先去除走路的时间
				times -= t[i];
			int k;
			
			while (times>0)
			{
				k = 1;
				for (int j = 1; j <= end; j++)
				{
					if (ft[j] > ft[k])
						k = j;
				}
				if (ft[k] > 0)
				{
					num += ft[k];
					ft[k] -= d[k];
					tmp[k]++;
					times--;
				}
				else break;
			}
			if (num > maxn)
			{
				maxn = num;
				for (int i = 1; i <= n; i++) ans[i] = tmp[i];
				if (times) ans[1] += times;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (i == n)
				cout << ans[i] * 5;
			else
				cout << ans[i] * 5 << ',' << ' ';
		}
		cout << endl;
		cout << "Number of fish expected: " << maxn << endl;
	}
	return 0;
}
