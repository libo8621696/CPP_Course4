#include<stdio.h>
int target,num,part[10],minc,ans[10],re=0;

void init()//初始化
{
    for(int i=0; i<=7; i++) ans[i]=part[i]=0;
    part[0]=1;
    minc=99999;
    re=0;
}
void solve(int num,int tar)//搜索
{
    if(num<=tar)//不要再分解
    {
        if(tar-num<minc)//差值更小则更新答案
        {
            minc=tar-num;
            for(int i=1; i<part[0]; i++)
                ans[i]=part[i];
            ans[0]=part[0];//分段数量
            ans[ans[0]]=num;
            re=0;//差值没有重复
        }
        else if(tar-num==minc) re=1;//当前最小差值重复，可能要输出rejected
    }
    else
    {
        part[part[0]++]=num%10;//切开最后一个数字，保存起来
        if(num/10>0&&tar>num%10)//切掉后还有数 且 切掉的小于target(新的target要大于0)
            solve(num/10,tar-num%10);
        part[0]--;//解决完切掉一个的，恢复为切掉前
        for(int i=100; i<=100000; i*=10)//切掉最后两个数、三个数...五个数
        {
            part[part[0]++]=num%i;
            if(num/i>0&&tar>num%i)
                solve(num/i,tar-num%i);
            part[0]--;
        }
    }
}
int main()
{
    while(~scanf("%d%d",&target,&num)&&target&&num)
    {
        init();
        solve(num,target);
        if(re) printf("rejected\n");
        else if(!ans[0]) printf("error\n");
        else
        {
            printf("%d ",target-minc);
            for(int i=0; i<ans[0]; i++)
                printf("%d ",ans[ans[0]-i]);
            printf("\n");
        }
    }
    return 0;
}