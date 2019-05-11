#include<iostream>
using namespace std;
int days;
int get_dayofweek();
int get_year();
int get_month(int);
int main()
{
	int year, month, dayofweek; int leap_year;
	char week[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	while ((cin >> days)&&days!= -1)
	{
		daysofweek = get_dayofweek();
		year = get_year();
		leap_year =  (year%4==0 && year%100==0 || year %400 ==0);
		month = get_month(leap_year);
		cout << year << "-" << month << "-" << ++days << week[dayofweek];
	}
	return 0;
}