#include<iostream>
#include<iomanip>
using namespace std;
int isrun(int y)
{
	if((y%4 == 0 && y%100 != 0) || ( y%400 == 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int y, m, d;
	char ch;
	int pm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int rm[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	cin >> y >> ch >> m >> ch >> d;
	if(m == 12 && d == 31)
	{
		cout << y+1 << "-01-01" << endl;
	}
	else if(isrun(y))
	{
		if(d == rm[m])
		{
			m += 1;
			cout << y << '-' <<setfill('0')<< setw(2) << m  <<"-01"<< endl;
		}
		else
		{
			cout << y << '-' <<setfill('0')<< setw(2) << m << '-' << setfill('0')<< setw(2) << d << endl; 
		}
	}
	else
	{
		if(d == pm[m])
		{
			m += 1;
			cout << y << '-' <<setfill('0')<< setw(2) << m  <<"-01" << endl;
		}
		else
		{
			cout << y << '-' <<setfill('0')<< setw(2) << m << '-' << setfill('0')<< setw(2) << d + 1<< endl; 
		}
	}
	return 0;
}