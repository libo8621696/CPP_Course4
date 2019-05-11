#include<iostream>
using namespace std;
class Complex
{
public:
	double real, imag;
	Complex(double r, double i)
	{
		real = r; imag = i;
	}
};

int main()
{
	Complex c1(1,2);
	Complex c2(c1);  //initialize c2 with copy constructor
	cout << c2.real << "," << c2.imag;   // output 1, 2
	return 0;
}