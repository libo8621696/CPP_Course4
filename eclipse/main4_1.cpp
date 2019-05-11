#include<iostream>
using namespace std;
int main(){
	int n, x, y;
	cin >> n >> x >> y;
	int T, m = 0;
	T = y/x;
	if(y % x > 0){
		m = n - T - 1;
	}
	else{
		if(n - T <= 0)
			m = 0;
		else
			m = n - T;
	}
	cout << m << endl;
}