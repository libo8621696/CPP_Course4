#include<iostream>
using namespace std;
class CBase
{
public:
	CBase(){};
	CBase(CBase&c)
	{
		cout << "CBase::copy constructor called" << endl;
	}
	CBase&operator=(const CBase&b)
	{
		cout << "CBase::operator = called" << endl;
		return *this;
	}
};

class CDerived:public CBase{};
int main()
{
	CDerived d1, d2;
	CDerived d3(d1);   //d3初始化过程中会调用CBase类复制构造函数
	d2 = d1;    // 会调用CBase类重载的"="
	return 0;
}