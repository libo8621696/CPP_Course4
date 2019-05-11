#include<iostream>
using namespace std;
class CTest
{
public:
	CTest(int n){}   // constructor function (1)
	CTest(int n, int m){} // constructor function (2)
	CTest(){}  // constructor function (3)
};

int main()
{
	CTest array1[3] = {1, CTest(1,2)};  // constructed with (1), (2) and (3)
	CTest array2[3] = {CTest(2,3), CTest(1,2), 1}; // constructed with (2), (2) and (1)
	CTest *pArray[3] = {new CTest(4), new CTest(1,2)}; // initialized with constructor (1) and (2)
	return 0;
}