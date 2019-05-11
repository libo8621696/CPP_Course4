#include<iostream>
using namespace std;
int main(){
	int a=0, b[5]={0,0,0,0,0};
	cin >> a;
	int sum = 0;
	for (int i = 0; i < 5; i++){
		cin >> b[i];
		if(b[i] < a)
			sum += b[i];
	}

	cout << sum << endl;

}