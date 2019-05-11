#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Student
{
private:
	char stName[30];
	int stAge;
	char stID[20];
	int stGrade[4];
public:
	void setName(const char* Name);
	void getName(char* Name);
	void setAge(int Age);
	void getAge(int& Age);
	void setID(const char* ID);
	void getID(char* ID);
	void setGrade(int* Grade);
	void getAverageGrade(int&getAverageGrade);
};

void Student::setName(const char* Name)
{
	strcpy(stName, Name);
}

void Student::getName(char* Name)
{
	strcpy(Name, stName);
}

void Student::setAge(int Age)
{
	stAge = Age;
}

void Student::getAge(int &Age)
{
	Age = stAge;
}

void Student::setID(const char*ID)
{
	strcpy(stID, ID);
}

void Student::getID(char* ID )
{
	strcpy(ID, stID);
}

void Student::setGrade(int* Grade)
{
	for(int i = 0; i < 4; i++)
	{
		stGrade[i] = Grade[i];
	}
}

void Student::getAverageGrade(int& AverageGrade)
{
	AverageGrade = (stGrade[0] + stGrade[1] + stGrade[2] + stGrade[3])/4;
}

int main()
{
	char name[20] ;
	int age = 0;
	char stunum[20] ;
	int grade[4];
	int AverageGrade = 0;
	char mark;
	cin.getline(name, 10, ',');
	cin>> age >> mark;
	cin.getline(stunum,10, ',');
	cin>> grade[0] >> mark >> grade[1] >> mark >> grade[2] >> mark >> grade[3];
	Student stu;
	stu.setName(name);
	stu.setAge(age);
	stu.setID(stunum);
	stu.setGrade(grade);
	memset(name, '\0', sizeof(name));
	memset(stunum, '\0', sizeof(stunum));
	stu.getName(name);
	stu.getAge(age);
	stu.getID(stunum);
	stu.getAverageGrade(AverageGrade);

	cout << name << ',' << age << ',' << stunum << ',' << AverageGrade << endl;

	return 0;
}