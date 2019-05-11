#include<iostream>
using namespace std;
class CCar;  // predeclaration of CCar class for the upcomming CDriver class
class CDriver
{
public:
	void ModifyCar(CCar *pCar); // modify the cars
};

class CCar
{
private:
	int price;
	friend class CDriver;
	friend int MostExpensiveCar(CCar cars[], int total);    // Declare friend class
	friend void CDriver::ModifyCar(CCar *pCar);    // Declare friend class
};

void CDriver::ModifyCar(CCar *pCar)
{
	pCar->price += 1000;    // Increase the value after the modifiaction of the cars 
}

int MostExpensiveCar(CCar cars[], int total)  // find the price of the most expensive car
{
	int tmpMax = -1;
	for(int i = 0; i < total; ++i)
	{
		if(cars[i].price > tmpMax)
		{
			tmpMax = cars[i].price;
		}
	}
	return tmpMax;
}

int main()
{
	return 0;
}