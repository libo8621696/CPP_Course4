#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n = 8;
	int &r1 = n;
	const int r2 = r1;
	cout << r2 << endl;
	return 0;
}