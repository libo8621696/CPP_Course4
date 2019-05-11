#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char s[500];
	cin.getline(s, 500);
	int word_length = 0;
	int word_temp = 0;
	int count = 0;
	for(int len1 = 0; s[len1] != '\0'; len1++)
	{
		word_length++;
		if((s[len1] == ' ') || (s[len1] == '.') )
		{
			if(word_temp < word_length)
			{
				word_temp = word_length;
				count = len1;
			}
			word_length = 0;
		}
	}

	for(int i = count - word_temp + 1; i < count; i++)
		cout << s[i];
	cout << endl;

	return 0;
}