#include<iostream>
using namespace std;
int a = 0, b = 0;
void exchange(int c, int d)
{
	int p;
	if(c < d)
	{
		p = c; c = d; d = p;
	}
}

int main()
{
	cin >> a >> b;
	exchange(a, b);
	cout << a << " " << b << endl;
	return 0;
}