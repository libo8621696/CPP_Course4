#include<stdio.h>
#include<string.h>
char a[10][10];             //记录棋盘形状
int vis[10];                //标记是否已放过棋子
int n,k;                    //n*n的棋盘，放k个棋子
int ans,m;                  //最终方案数，已放棋子个数
void dfs(int row)
{
    if(k==m)                //k个棋子均放好，方案数+1
    {
        ans++;
        return;
    }
    if(row>=n)              //走出矩阵出界
        return;
    for(int j=0;j<n;j++)
        if(vis[j]==0&&a[row][j]=='#')        //判断条件：所在列未放过棋子 && 棋盘区域
    {
        vis[j]=1;           //标记：放入棋子
        m++;                //已放好棋子数目+1
        dfs(row+1);         //递归：对下一行深度优先搜索，直到查询失败
        vis[j]=0;           //将已标记过的列复原
        m--;                //取消查询失败的操作
    }
    dfs(row+1);             //递归进入下一行
}
int main()
{
    int i,j;
    while(~scanf("%d%d",&n,&k),n+1,k+1)
    {
        ans=0;
        m=0;
        for(i=0;i<n;i++)
            scanf("%s",&a[i]);
        memset(vis,0,sizeof(vis));     //初始化为0
        dfs(0);
        printf("%d\n",ans);
    }
    return 0;
}
