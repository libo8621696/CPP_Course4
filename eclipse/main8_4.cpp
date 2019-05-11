#include<iostream>
using namespace std;
int main(){
	int n = 0, k = 0, exist = 0;
	cin >> n >> k;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}


	for (int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(a[i] + a[j] == k){
				exist = 1;
			}
		}
	}
	if(exist == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}