#include <cstdio>
#include <string>
#include <memory.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include<queue>
#include <vector>
#include <bitset>
using namespace std;

int n;
int dp[1000];

int main()
{
    while(cin >> n)
    {
    	if(n == 0)
    		break;
    	else
    	{
    		dp[1] = 1;
		    while(1)
		    {
		        int flag = true;
		        for (int i = 2; i <= n ; i++)
		        {
		            dp[i] = (dp[i - 1] * n + 1) / (n - 1);
		            if (dp[i] * (n - 1) != dp[i - 1] * n + 1) {
		                dp[1]++;
		                flag = false;
		                break;
		            }
		        }
		        if (flag)
		            break;
    		}
     		cout << dp[n]*n+1 << endl;
    	}
    }
    return 0;
}