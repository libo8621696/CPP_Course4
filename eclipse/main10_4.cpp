#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char op = ' ';
	int a=0, b =0;
	cin >> a >> b >> op;
	if(op != '+' && op != '-' && op != '*' && op != '/')
	{
		cout << "Invalid operator!"<< endl;
	}
	else if(op == '/' && b == 0)
	{
		cout << "Divided by zero!" << endl;
	}
	else
	{
		switch(op)
		{
			case '+': 
				cout << a + b << endl;
				break;
			case '-':
				cout << a - b << endl;
				break;
			case '*':
				cout << a * b << endl;
				break;
			case '/':
				cout << a / b << endl;
				break;
		}
	}
	return 0;
}