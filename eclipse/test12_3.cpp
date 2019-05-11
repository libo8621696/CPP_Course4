#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[3][4] = {1,3,5,6,9,11,13,15,17,19,21,23};
	int (*p)[4], i, j;
	p = a;
	cin >> i >> j;
	cout << setw(4) << p[i][j]<<endl;
	return 0;
}