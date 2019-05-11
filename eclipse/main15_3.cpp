#include<iostream>
using namespace std;
int main()
{
	int a = 0,  b = 0, c = 0;
	char d, e;
	cin >> a >> d >> b >> e >> c;
	if (a + b == c) {
		cout << '+'<<endl;
	}
	else {
		if (a - b == c)
			cout << '-' << endl;
		else {
			if (a * b == c)
				cout << '*' << endl;
			else {
				if (a / b == c)
					cout << '/' << endl;
				else {
					if (a % b == c)
						cout << '%' << endl;
					else
						cout << "error" << endl;
				}
			}
		}
	}

	return 0;
}