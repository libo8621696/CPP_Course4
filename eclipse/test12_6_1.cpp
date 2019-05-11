#include<iostream>
using namespace std;
class CTyre     // tyre type
{
private:
	int radius;
	int width;
public:
	CTyre(int r, int w):radius(r), width(w){}

};

class CEngine{};   // engine type

class CCar         // car type
{
private:
	int price;
	CTyre tyre;
	CEngine engine;
public:
	CCar(int p, int tr, int tw);

};

CCar::CCar(int p, int tr, int tw):price(p), tyre(tr,tw){};

int main()
{
	CCar car(20000, 17, 225);
	return 0;
}