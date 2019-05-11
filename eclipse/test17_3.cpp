#include<iostream>
using namespace std;
class Ctest
{
public:
	~Ctest()
	{
		cout << "destructor called" <<endl;
	}
};


int main()
{
	Ctest array[2];
	cout << "End Main" << endl;
	return 0;
}