#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cin.get();
	char newgen[50][256] = {'\0'};
	for(int i = 0; i < n; i++)
	{
		char gen[256];
		cin.getline(gen, 256);
		for(int j = 0; j < 256; j++)
		{
			switch(gen[j])
			{
				case 'A': newgen[i][j] = 'T';break;
				case 'T': newgen[i][j] = 'A';break; 
				case 'G': newgen[i][j] = 'C';break;
				case 'C': newgen[i][j] = 'G';break;
				default: newgen[i][j] = '\0';break;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 256; j++)
			{
				if(newgen[i][j] != '\0')
				{
					cout << newgen[i][j];
				}
				else
				{
					cout << endl;
					break;
				}
			}
	}
	return 0;
}