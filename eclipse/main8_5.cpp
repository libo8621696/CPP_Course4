#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;  // input the integer between 10 and 100, with 10 included
	for (int i = 10; i <= n; i++ ){
		int deci = i / 10;
		int digi = i % 10;
		// if i is divided by the sum of its decimal and digital number, then output the number i
		if( (i%(deci + digi)) == 0) 
			cout << i << endl;
	}
	return 0;
}