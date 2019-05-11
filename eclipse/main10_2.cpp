#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	bool flag = false;
	int n;
	while(cin >> n)
	{
		if(n%3 == 0)
		{
			cout << 3 << " ";
			flag = true;
		}
		if(n%5 == 0)
		{
			cout << 5 << " ";
			flag = true;
		}
		if(n%7 == 0)
		{
			cout << 7 << " ";
			flag = true;
		}
		if(flag == false)
		{
			cout << "n" << " ";
		}
		flag = false;
		cout << endl;
	}
	

	return 0;
}