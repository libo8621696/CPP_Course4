#include<iostream>
using namespace std;
class Complex
{
private:
	double real, imag;
public:
	void Set(double r, double i);
	Complex(double r);
	Complex(double r, double i);
	Complex(Complex c1, Complex c2);
};

Complex::Complex(double r) // 1st construction function
{
	real = r; imag = 0;
}

Complex::Complex(double r, double i) // 2nd construction function
{
	real = r; imag = i;
}

Complex::Complex(Complex c1, Complex c2)// 3rd construction function
{
	real = c1.real + c2.real;
	imag = c1.imag + c2.imag;
}

int main()
{
	Complex c1(3), c2(1,2), c3(c1,c2), c4 = 7;
	return 0;
}