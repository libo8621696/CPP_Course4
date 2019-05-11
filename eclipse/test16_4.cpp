#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class CRectangle
{
public:
	int w, h;
	void Init(int w_, int h_)
	{
		w = w_; h = h_;
	}
	int Area()
	{
		return w*h;
	}
	int Perimeter()
	{
		return 2 * (w + h);
	}
};
class CEmployee
{
private:
	char szName[30];
public:
	int salary;
	void setName(char *name);
	void getName(char *name);
	void averageSalary(CEmployee e1, CEmployee e2);

};

void CEmployee::setName(char*name)
{
	strcpy(szName, name);
}

void CEmployee::getName(char*name)
{
	strcpy(name, szName);
}

void CEmployee::averageSalary(CEmployee e1, CEmployee e2)
{
	salary = (e1.salary + e2.salary) / 2;
}
int main()
{
	// int w, h;
	// CRectangle r;
	// cin >> w >> h;
	// r.Init(w, h);
	// cout << r.Area() << endl << r.Perimeter();
	CEmployee e;
	// strcpy(e.szName, "Tom123456");
	e.setName("Tom");
	e.salary = 5000;
	return 0;
}