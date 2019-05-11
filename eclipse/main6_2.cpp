#include<iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	// 95<=分数<=100, 输出1
	if(n >= 95 && n <= 100)
		cout << 1 << endl;
	// 90<=分数<95,输出2
	else if(n >= 90)
		cout << 2 << endl;
	// 85<=分数<90,输出3
	else if(n >= 85)
		cout << 3 << endl;
	// 80<=分数<85,输出4
	else if(n >= 80)
		cout << 4 << endl;
	// 70<=分数<80,输出5
	else if(n >= 70)
		cout << 5 << endl;
	// 60<=分数<70输出6
	else if(n >= 60)
		cout << 6 << endl;
	// 分数 < 60;输出7.
	else
		cout << 7 << endl;
}