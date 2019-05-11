#include<iostream>
using namespace std;
class Complex
{
public:
	double real, imag;
	Complex(double r = 0.0, double i = 0.0):real(r), imag(i){}
	Complex operator+(const Complex&a);
	Complex operator-(const Complex&c);
};
Complex Complex::operator+(const Complex&a)
{
	return Complex(this->real + a.real, this->imag + a.imag);
}
Complex Complex::operator-(const Complex&c)
{
	return Complex(this->real - c.real, this->imag - c.imag);
}

int main()
{
	Complex a(4,4), b(1,1);
	cout << (a + b).real << " , " << (a + b).imag << endl;
	cout << (a - b).real << " , " << (a - b).imag << endl;
	return 0;
}