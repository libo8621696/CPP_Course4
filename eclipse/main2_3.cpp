#include<iostream>
using namespace std;
int main(){
	int k, m; 
	int s1 = 0, s5 = 0, s10 =0;
	cin >> k;
	for(int i = 0; i < k; i++){
		cin >> m;
		if(m == 1){	
			s1++;// 计算1出现的次数
		}
		else if(m == 5){
			s5++; // 计算5出现的次数
		}
		else if(m == 10){
			s10++;  // 计算10出现的次数
		}
	}
	cout << s1 << endl;
	cout << s5 << endl;
	cout << s10 << endl;
}