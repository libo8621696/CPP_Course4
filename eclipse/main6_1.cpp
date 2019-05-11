#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double percent[4]={0.00,0.00,0.00,0.00};
	int n = 0, input = 0;
	int num[4]={0, 0, 0, 0};
	// 输入过往病人的数目n
	cin >> n;
	// 对不同年龄段的病人进行计数
	for(int i = 0; i < n; i++){
		cin >> input;
		// // 对不同年龄段的病人计算百分比
		if(input > 60)
		// 对于大于60的，计入num[3]
			num[3] += 1;
		else if(input > 35)
		// 对于大于等于36小于等于60的，计入num[2]
			num[2] += 1;
		else if(input > 18)
		// 对于大于等于19小于等于35的，计入num[1]
			num[1] += 1;
		else
		// 对于18以下的，计入num[0]
			num[0] += 1;
		
	}

	
	for(int j = 0; j < 4; j++)
		percent[j]= num[j] * 100 / n;
	// 显示1-18的病人比例
	cout << "1-18: " << fixed << setprecision(2) << percent[0] << "%" << endl;
	// 显示19-35的病人比例
	cout << "19-35: "<< fixed << setprecision(2) << percent[1] << "%" << endl;
	// 显示36-60的病人比例
	cout << "36-60: " << fixed << setprecision(2) << percent[2] << "%" << endl;
	// 显示大于60对病人比例
	cout << "60-: " << fixed << setprecision(2) << percent[3] << "%" << endl;

}