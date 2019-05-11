#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char words[1000][40];
	int wordsLen[1000];
	int n;
	cin >> n;
	cin.get();
	for(int i = 0; i < n;i++)
	{
		char temp;
		for(int j = 0; j < 40; j++)
		{
			cin.get(temp);
			if(temp != ' ' && temp != '\n')
			{
				words[i][j] = temp;
			}
			else
			{
				wordsLen[i] = j;
				break;
			}
		}
	}

	int length = wordsLen[0];
	for(int j = 0; j < length; j++)
	{
		cout << words[0][j];
	}

	for(int i = 1; i < n; i++)
	{
		if(length + 1 + wordsLen[i] <= 80)
		{
			length = length + 1 + wordsLen[i];
			cout << ' ';
			for(int j = 0; j < wordsLen[i]; j++)
			{
				cout << words[i][j];
			}
		}
		else
		{
			cout << endl;
			length = wordsLen[i];
			for(int j = 0; j < wordsLen[i]; j++)
			{
				cout << words[i][j];
			}
		}
	}
	return 0;
}
