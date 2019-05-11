#include<iostream>
#include<string>
using namespace std;
class CEmployee
{
	string name;
	int age;
	char gender;
public:
	CEmployee()
	{
		cout << "CEmployee constructor" << endl;
	}
	void PrintBasicInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Age:" << age << endl;
		cout << "Gender: " << gender << endl;
	};
	void SetBasicInfo(const string &name_, int age_, int gender_)
	{
		name = name_;
		age = age_;
		gender = gender_;
	}
};

class CSalesman:virtual public CEmployee
{
protected:
	int salesVolume;   // 销售额
};

class CManager:virtual public CEmployee
{
protected:
	int totalSubordinates;  //手下人数
};

class CSalesManager:public CSalesman, public CManager
{
public:
	void setInfo(int sv, int sn)
	{
		salesVolume = sv;
		totalSubordinates = sn;
	}
	void PrintInfo()
	{
		PrintBasicInfo(); //已经指明了虚继承，不需要再指明在哪个基类对象上
		// 执行PrintBasicInfo
		cout << "Sales Volume: " << salesVolume << endl;
		cout << "Total Subordinates:" << totalSubordinates << endl;
	}
};

int main()
{
	CSalesManager sm;
	sm.SetBasicInfo("Tom", 24, 'M'); // 必须指明在哪个基类对象上执行SetBasicInfo
	sm.setInfo(100000, 20);
	sm.PrintInfo();
	return 0;
}