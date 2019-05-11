#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int m = 0;
	float a = 0.00;
	char num[51][3] = {' '};
	float serious[51] = {0.0};
	bool flag = false;
	bool judge[51] = {false};
	int ID[51] = {0};
	int *p = ID;
	cin >> m >> a;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> num[i][j];
		}
		cin >> serious[i];
	}

	for(int i = 0; i < m; i++)
	{
		if(serious[i] > a)
		{
			//*p++ = i;
			// for(int j = 0; j < 3; j++)
			// {
			// 	cout << num[i][j];
			// }
			// cout<< ' ' << serious[i];
			// cout << endl;
			flag = true;
			judge[i] = true;
		}
	}

	if(flag == false)
	{
		cout << "None" << endl;
		return 0;
	}

	for(int i = 0; i < m; i++)
	{
		if(judge[i])
			*p++ = i + 1;
	}

	for(int i = 0; i < m && ID[i] > 0; i++)
	{
		for(int j = 0; j < (m - i) && ID[j] > 0 ; j++)
		{
			if(serious[ID[i] - 1] > serious[ID[j] - 1])
			{
				int temp = ID[i];
				ID[i] = ID[j];
				ID[j] = temp;
			}
		}
	}

	for(int i = 0; i < m && ID[i] > 0; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << num[ID[i] - 1][j];
		}
		cout <<' ' << fixed << setprecision(1) << serious[ID[i] - 1] << endl;
	}
	return 0;
}