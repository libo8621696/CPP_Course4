#include<iostream>
#include<iomanip>
using namespace std;
void bubblesort(int ID[], float rate[], int num)
{
	for(int i = 0; i < num; i++)
	{
		for(int j = 0; j < num - i - 1; j++)
		{
			if(rate[j] > rate[j+1])
			{
				int t = rate[j];
				int ID_temp = ID[j];
				rate[j] = rate[j + 1];
				ID[j] = ID[j + 1];
				rate[j + 1] = t;
				ID[j + 1] = ID_temp;
			}
		}
	}
}

int main()
{
	int n = 0; // number of plates
	cin >> n;
	int ID[100] = {0};
	int ID_A[100] = {0};
	int ID_B[100] = {0};
	char type[100] = {'\0'};
	int num_before[100] = {0};
	int num_after[100] = {0};
	int num_A = 0;
	int num_B = 0;
	float rate[100] = {0.0};
	float rate_A[100] = {0.0};
	float rate_B[100] = {0.0};

	for(int i = 0; i < n; i++)
	{
		cin >> ID[i] >> num_before[i] >> num_after[i];
		if(num_before > 0)
		{
			rate[i] = num_after[i]/num_before[i];
		}
		else
		{
			rate[i] = 0;
		}
		
		if(rate[i] > 100)
		{
			type[i]='A';
			ID_A[num_A] = ID[i];
			rate_A[num_A] = rate[i];
			num_A++;
		}
		else
		{
			type[i]='B';
			ID_B[num_B] = ID[i];
			rate_B[num_B] = rate[i];
			num_B++;
		}
	}

	bubblesort(ID_A, rate_A, num_A);
	bubblesort(ID_B, rate_B, num_B);

	cout << num_A << endl;
	for(int i = 0; i < num_A ; i++)
	{
		cout << ID_A[i] << endl;
	}



	cout << num_B << endl;
	for(int i = 0; i < num_B ; i++)
	{
		cout << ID_B[i] << endl;
	}
	


	return 0;
}