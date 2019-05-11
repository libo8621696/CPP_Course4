#include<iostream>
using namespace std;
class CDemo
{
private:
	int  n;
public:
	CDemo(int i = 0):n(i){}
	CDemo operator++(); //for preproccess
	CDemo operator++(int); // for postprocess
	operator int(){return n;}
	friend CDemo operator--(CDemo&);
	friend CDemo operator--(CDemo&, int);
};

CDemo CDemo::operator++()
{
	// preproccess
	n++;
	return *this;
}

CDemo CDemo::operator++(int k)
{
	CDemo tmp(*this);  // record the object before modified
	n++;
	return tmp; // return the object before modified
}

CDemo operator--(CDemo& d)
{
	// pre proccess --
	d.n--;
	return d;
}

CDemo operator--(CDemo& d, int)
{
	// post proccess --
	CDemo tmp(d);
	d.n--;
	return tmp;
}

int main()
{
	CDemo d(5);
	cout << (d++) << ", d++" << endl;
	cout << d << "," << endl;
	cout << (++d) << ", ++d" << endl;
	cout << d << "," << endl;
	cout << (d--) << ", d--" << endl;
	cout << d << "," << endl;
	cout << (--d) << ", --d" << endl;
	cout << d << "," << endl;
	return 0;
}