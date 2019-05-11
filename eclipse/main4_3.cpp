#include<iostream>
using namespace std;
int main(){
	int n, score = 0;

	// 输入参加考试的人数n；
	cin >> n;
	double a[100];
	// 输入所有人的成绩
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	// 选择最高的分数
	for (int i = 0; i < n; i++){
		if(a[i] > score)
			score = a[i];
	}
	// 输出最高的成绩
	cout << score << endl;
}
