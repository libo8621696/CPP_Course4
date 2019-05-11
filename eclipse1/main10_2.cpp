#include<iostream>
using namespace std;
 
int gcd(int a,int b)       //定义函数gcd 计算 
{
    if(a%b==0)  
        return b;          // 如果a能整除b 则b为最大公约数 
    else                   
        return gcd(b,a%b); //如果不能整除，则将b作为新的被除数，a作为新的除数，    
} 
 
int main()                 //定义主函数 
{
    int a,b;               //定义变量 a,b 
    cin>>a>>b;             //输入 
    cout<<gcd(a,b);        //输出a,b的最大公约数 
    return 0;
}