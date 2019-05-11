#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
	int money;
	cin >> money;
	int a[6] = { 100, 50, 20, 10, 5, 1 };
	for (int i = 0; i < 6; i++) {
		cout << money / a[i] << endl;
		money %= a[i];
	}
	return 0;
}
