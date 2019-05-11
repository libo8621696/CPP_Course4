#include<iostream>
using namespace std;
int main(){
	int n;
	// 输入一个任意的三位整数
	cin >> n; 
	if(n < 0)
		n = -n;  // 将负整数转化为正整数，从而百位不带符号
	// 输出百位
	int n_h = n / 100;
	cout << n_h << endl;
	// 输出十位
	n -= n_h * 100;
	int n_t = n / 10;
	cout << n_t << endl;
	// 输出个位
	n -= n_t * 10;
	int n_s = n;
	cout << n_s << endl;

	return 0;
}