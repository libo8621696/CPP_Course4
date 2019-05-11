#include<iostream>
#include<iomanip>
using namespace std;
float count_A(char invoice_type, float invoice_acc)
{
	if(invoice_type == 'A')
	{
		return invoice_acc;
	}
	else
	{
		return 0.0;
	}
}

float count_B(char invoice_type, float invoice_acc)
{
	if(invoice_type == 'B')
	{
		return invoice_acc;
	}
	else
	{
		return 0.0;
	}
}

float count_C(char invoice_type, float invoice_acc)
{
	if(invoice_type == 'C')
	{
		return invoice_acc;
	}
	else
	{
		return 0.0;
	}
}

float count_1(int ID, float invoice_acc)
{
	if(ID == 1)
	{
		return invoice_acc;
	}
	else
	{
		return 0.0;
	}
}

float count_2(int ID, float invoice_acc)
{
	if(ID == 2)
	{
		return invoice_acc;
	}
	else
	{
		return 0.0;
	}
}

float count_3(int ID, float invoice_acc)
{
	if(ID == 3)
	{
		return invoice_acc;
	}
	else
	{
		return 0.0;
	}
}

int main()
{
	float invoice_A = 0.0, invoice_B = 0.0, invoice_C = 0.0;
	float invoice_ID1 = 0.0, invoice_ID2 = 0.0, invoice_ID3 = 0.0;
	int ID[3] = {0};
	int invoice_num = 0;
	char invoice_type = ' ';
	float invoice_acc = 0.0;
	for(int i = 0; i < 3; i++)
	{
		cin>>ID[i] >> invoice_num;
		for(int j = 0; j < invoice_num; j++)
		{
			cin >> invoice_type >> invoice_acc;
			invoice_A += count_A(invoice_type, invoice_acc);
			invoice_B += count_B(invoice_type, invoice_acc);
			invoice_C += count_C(invoice_type, invoice_acc);
			invoice_ID1 += count_1(ID[i], invoice_acc);
			invoice_ID2 += count_2(ID[i], invoice_acc);
			invoice_ID3 += count_3(ID[i], invoice_acc);
		}

	}

	cout << 1 << " " <<fixed << setprecision(2)<< invoice_ID1 << endl;
	cout << 2 << " " <<fixed << setprecision(2)<< invoice_ID2 << endl;
	cout << 3 << " " <<fixed << setprecision(2)<< invoice_ID3 << endl;
	cout << 'A' << " " <<fixed << setprecision(2)<< invoice_A << endl;
	cout << 'B' << " " <<fixed << setprecision(2)<< invoice_B << endl;
	cout << 'C' << " " <<fixed << setprecision(2)<< invoice_C << endl;

	return 0;
}