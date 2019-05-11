#include<iostream>
using namespace std;
int main(){
	int a[6];
	int even[6];
	int evenId = 0;
	int evenMin = 100;
	int odd[6];
	int oddId = 0;
	int oddMax = 0;
	// 输入6个正整数
	for (int i = 0; i < 6; i++){
		cin >> a[i];
	}
	// 将偶数和奇数分组
	for (int i = 0; i < 6; i++){
		if(a[i] % 2 == 0){
			even[evenId] = a[i];
			evenId++;
		}
		else{
			odd[oddId] = a[i];
			oddId++;
		}

	}

	// 取出最大的奇数
	for(int i = 0; i < oddId; i++){
		if(odd[i] > oddMax)
			oddMax = odd[i];
	}

	// 取出最小的偶数
	for(int i = 0; i < evenId; i++){
		if(even[i] < evenMin)
			evenMin = even[i];
	}

	

	// 计算最大的奇数与最小的偶数之差的绝对值
	if(oddMax-evenMin > 0)
		cout << oddMax - evenMin << endl;
	else
		cout <<-oddMax + evenMin << endl;

}