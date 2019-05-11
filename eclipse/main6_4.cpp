#include<iostream>
using namespace std;
int main(){
	int money = 0;
	cin >> money;
	int cash_100 = 0,
	    cash_50 = 0, 
	    cash_20 = 0, 
	    cash_10 = 0, 
	    cash_5 = 0, 
	    cash_1 = 0;
	cash_100 = money / 100;
	money -= cash_100 * 100;
	cout << cash_100 << endl;

	cash_50 = money / 50;
	money -= cash_50 * 100;
	cout << cash_50 << endl;

	cash_20 = money / 20;
	money -= cash_20 * 20;
	cout << cash_20 << endl;

	cash_10 = money / 10;
	money -= cash_10 * 10;
	cout << cash_10 << endl;

	cash_5 = money / 5;
	money -= cash_5 * 5;
	cout << cash_5 << endl;

	cash_1 = money;
	cout << cash_1 << endl;

}