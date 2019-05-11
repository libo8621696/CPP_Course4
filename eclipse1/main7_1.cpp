#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char nu[100];
int num[100],gap[100],save[100];
int ret,len,test,time= 0;
long long tar;
bool mult = false, judge = false;
void init()
{
    memset(gap,0,sizeof(gap));
    len = strlen(nu);
    for(int i = 0,j = 1; i<len;++i,++j) num[j] = nu[i]-'0';
    judge = mult  = false;
    ret = 0;gap[0] = gap[len] = 1; test = 0;time = 0;
}
int sum()
{
    int base = 1; int ans = 0; int t = 0;
    for(int i = len ; i>=0; --i){
        if(gap[i] == 0){
            base*=10;
            t += num[i] * base;
        }else if(gap[i] == 1){
            ans+=t; base = 1;
            t = num[i] * base;
        }
    }
    return ans;
}
void cpy()
{
    for(int i = 0; i<=len ;++i) save[i] = gap[i];
}
// gap[i] (1<=gap<=len)
// gap[i] = 0 -> not chose;
// gap[i] = 1 -> chose;
void output()
{
    for(int i = 1;i<=len;++i){
        printf("%d",num[i]);
        if(i!=len){
            if(save[i] == 1) printf(" ");
        }
    }
    printf("\n");
}
void dfs(int depth,int tag)
{
    if(len==depth){
        int t = sum();
        if(t>ret && t<=tar){
            judge = true;
            time = 1;
            cpy();
            ret = t;
        }else if(t==ret && t<=tar){
            time++;
        }
        return;
    }
    gap[depth] = tag;
    if(depth == len-1){
        dfs(depth+1,1);//chose gap
    }else{
        dfs(depth+1,1);//chose gap
        dfs(depth+1,0);//don't chose gap
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    while(scanf("%lld %s",&tar,nu) && tar){
        init();
        dfs(0,1);
        if(judge){
            if(time>1) printf("rejected\n");
            else {printf("%d ",ret);output();}
        }else printf("error\n");
    }
    return 0;
}
