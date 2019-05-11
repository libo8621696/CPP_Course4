#include<iostream>
using namespace std;
int main(){
	int N = 0, K = 0, max = 0, min = 0, id = 0;
	// 输入N和K
	cin >> N;
	cin >> K;

	// 输入N个正整数a1, a2, a3, ..., aN
	int input[N];
	for(int i = 0; i < N; i++){
		cin >> input[i];
	}


	// 找到最大的数，记录编号，然后将该数置零，继续找第二大的数，依次类推，直至找到第K大的数之后，退出while循环
	while(K > 0){
		max = 0;
		for(int j = 0; j < N; j++){
			if(input[j] > max){
				max = input[j];
				id = j;
			}
		}
		input[id]= 0;

		K--;
	}

	// 输出最大的数
	cout << max << endl;

}