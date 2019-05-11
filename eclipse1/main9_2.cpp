#include<stdio.h>
#include<algorithm>
 
using namespace std;
 
const int N_MAX = 10000;
int price[N_MAX], needs[N_MAX];
int s, N;
long long res;
 
void init(){
	res = 0;
	scanf("%d%d", &N, &s);
	
	for(int i = 0; i < N ; i++){
		scanf("%d%d", &price[i], &needs[i]);
	}
	
	return ;
}
 
void solve(){
	int lowprice = price[0];
	res += lowprice*needs[0];
	
	for(int i = 1; i < N; i++){
		lowprice = min( lowprice+s, price[i]);
		res += lowprice*needs[i];
	}
 
	return ;
}
 
int main()
{
	init();
	solve();
	printf("%lld\n", res);
    return 0;
}
