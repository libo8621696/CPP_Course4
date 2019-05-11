#include<iostream>
using namespace std;
class CDemo
{
public:
	~CDemo()    // destructor function
	{
		cout << "Destructor called" << endl;
	}
};
int main()
{
	CDemo array[2];              // call the constructor function twice
	CDemo *pTest = new CDemo;    // call the constructor function
	delete pTest;                //  call the destructor function
	cout << "------------------" << endl;
	pTest = new CDemo[2];        // call the constructor function twice
	delete[] pTest;              // call the destructor function twice
	cout << "Main ends." << endl;
	return 0;
}