#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
 
using namespace std;
 
int a[100005];
int n,m;
int f(int mid)    //查找距离为mid时的个数
{
    int sum=0;
    int len=1;
    for(int i=1;i<n;i++)
    {
        if((sum+(a[i]-a[i-1]))<mid)
        {
            sum+=(a[i]-a[i-1]);
        }
        else
        {
            sum=0;
            len++;
        }
    }
    if(len<m) return false;
    else return true;
}
 
 
int main()
{
    int i;
    while(scanf("%d%d",&n,&m)==2)
    {
 
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int low=a[n-1]-a[0],high=a[n-1]-a[0];
        for(i=1;i<n;i++)
        {
            low=min(low,a[i]-a[i-1]);
        }
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(f(mid))
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        printf("%d\n",high);
    }
    return 0;
}
