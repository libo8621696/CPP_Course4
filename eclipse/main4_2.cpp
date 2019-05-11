#include<iostream>
#include<cmath>
using namespace std;
int main(){
	const double Pi = 3.14159;
	double r,h;
	cin >> h >> r;
	int n;
	n = ceil(20000/Pi/r/r/h);
	cout << n << endl;
}