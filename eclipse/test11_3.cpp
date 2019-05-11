#include<iostream>
using namespace std;
int q(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return(q(n-2) + q(n-1));
}

int main()
{
	int n = 0;
	cout << "Please input the number: " << endl;;
	cin >> n;
	cout << "The fibonacci result for this number is: " << endl;
	cout << q(n) << endl;
	return 0;
}