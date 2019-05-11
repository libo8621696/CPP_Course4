#include<iostream>
using namespace std;
class Location
{
private:
	int x, y;
public:
	void init(int x = 0, int y = 0);
	void valueX(int val) 
	{
		x = val;
	}
	int valueX()
	{
		return x;
	}
};

void Location::init(int X, int Y)
{
	x = X;
	y = Y;
}

int main()
{
	Location A;
	A.init(5);
	A.valueX(5);
	cout << A.valueX();
	return 0;
}