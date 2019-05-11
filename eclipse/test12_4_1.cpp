#include<iostream>
using namespace std;
class CRectangle
{
private:
	int w,h;
	static int totalArea;     // total area of the rectangle
	static int totalNumber;   // total number of the rectangles
public:
	CRectangle(int w_, int h_);
	~CRectangle();
	static void PrintTotal();
};

CRectangle::CRectangle(int w_, int h_)
{
	w = w_;  h = h_;
	totalNumber++;   // increase the total number if an object is generated
	totalArea += w * h;   // increase the total area if an object is generated
}

CRectangle::~CRectangle()
{
	totalNumber--;   // decrease the total number if an object is deleted
	totalArea -= w*h;   // decrease the total area if an object is deleted
}

void CRectangle::PrintTotal()
{
	cout << totalNumber << "," << totalArea << endl;
}

int CRectangle::totalNumber = 0;
int CRectangle::totalArea = 0;
// The static variable must be declared or initialized when it is defined in the class, otherwise the program could not be successfully compiled.

int main()
{
	CRectangle r1(3, 3), r2(2, 2);
	
	CRectangle::PrintTotal();
	r1.PrintTotal();
	return 0;
}



