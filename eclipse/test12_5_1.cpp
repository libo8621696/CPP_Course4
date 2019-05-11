#include<iostream>
using namespace std;
class Sample
{
public:
	void GetValue() const;
};

void Sample::GetValue() const
{}

int main()
{
	const Sample o;
	o.GetValue();   // execute the constant member functionn of the constant object
	return 0;

}