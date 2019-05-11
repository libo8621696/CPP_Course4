#include<iostream>
using namespace std;
int A_guess(int bo, int dong, int tai, int hong)
{
	return (dong==1)+(hong==4)+(bo==3);
}
int B_guess(int bo, int dong, int tai, int hong)
{
	return (hong==1)+(dong==4)+(bo==2)+(tai==3);
}
int C_guess(int bo, int dong, int tai, int hong)
{
	return (hong==4)+(dong==3);
}

int D_guess(int bo, int dong, int tai, int hong)
{
	return (bo==1)+(tai==4)+(hong==2)+(dong==3);
}

int main()
{
	for(int bo = 1; bo < 5; bo++) // boyanghu
	{
		for(int dong = 1 ; dong < 5; dong++) // dongtinghu
		{
			for(int tai = 1; tai < 5; tai++) // taihu
			{
				for(int hong = 1; hong < 5; hong++) // hongzehu
				{
					if(bo!=dong&&bo!=tai&&bo!=hong&&dong!=tai&&dong!=hong&&tai!=hong)
					{
						if((A_guess(bo,dong,tai,hong)==1) &&
						   (B_guess(bo,dong,tai,hong)==1) &&
						   (C_guess(bo,dong,tai,hong)==1) &&
						   (D_guess(bo,dong,tai,hong)==1))
						{
							cout << bo <<endl;
							cout << dong <<endl;
							cout << tai << endl;
							cout << hong << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}