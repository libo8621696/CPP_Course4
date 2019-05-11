#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	double dis =0.0;
	double dist[150] = {0.0};
	double x[150] = {0.0};
	double y[150] = {0.0};
	for(int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	int num = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			dist[num++] = sqrt(pow(x[i]-x[j],2) + pow(y[i] - y[j], 2));
		}
	}
	for(int i =0; i < num; i++)
	{
		if(dis < dist[i])
		{
			dis = dist[i];
		}
	}

	cout << fixed << setprecision(4) << dis << endl;
}