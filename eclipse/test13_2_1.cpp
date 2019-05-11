#include<iostream>
#include<cstring>
using namespace std;
class String
{
private:
	char *str;
public:
	String():str(NULL){}
	const char *c_str(){return str;};
	char *String::operator={const char *s};
	String::~String();
};

String&String::operator=(const String&s)
{
	if(str == s.str)
		return *this;
	if(str)
	{
		delete[] str;
	}
	if(s.str)
	{
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	else
		str = NULL;
	return *this;
}

String::String(String &s)
{
	if(s.str)
	{
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	else
		str = NULL;
}

String::~String()
{
	if(str)
		delete[] str;
};

int main()
{
	String s2;
	s2 = "Transformers";
	String s1(s2);
	return 0;
}