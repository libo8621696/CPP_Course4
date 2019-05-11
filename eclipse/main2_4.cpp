#include<iostream>
using namespace std;
int main(){
	int N, m;
	cin >> N;
	int sum[N]; 
	for(int i = 0; i < N ; i++){
		cin >> m;
		sum[i] = 0;
		while(m){
		sum[i] += (m%2);
		m /= 2;
	    }
	}
	
	for(int i = 0; i < N; i++){
		cout << sum[i] << endl;
	}

}