#include<iostream>
using namespace std;
int main(){
	int n = 0, d[100];
	cin >> n;
	// 其中t1表示骑车消耗的时间，t2表示走路消耗的时间
	double t1 = 0, t2 = 0;
	for (int i = 0; i < n; i++){
		cin >> d[i];
	}

	for (int j = 0; j < n; j++){

		t1 = 27 + 23 + d[j] / 3.0;
		t2 = d[j] / 1.2;
		if(t1 < t2)
			cout << "Bike" << endl;
		else if (t1 > t2)
			cout << "Walk" << endl;
		else 
			cout << "All" << endl;

	}

	return 0;
}