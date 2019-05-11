#include<iostream>
using namespace std;
int main(){
	int N = 10, K =1;
	int M = 0, year = 0;
	float price = 200.0;
	float salary =0.0;
	while(cin >> N >> K){
		for(int i = 1; i < 21; i++){
			year = i;
			salary = N * i;
			if(price < salary){
				cout << i << endl;
				break;
			}
			price *= (1 + K/100.0);
		}
		if (year == 20)
			cout << "Impossible" << endl;
	}
		
	return 0;
}