#include <iostream>
using namespace std;

int Horizontal_placement(int n);
int vertical_placement(int n);

int sum_placement(int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return 0;
    return Horizontal_placement(n) + vertical_placement(n);
}

int Horizontal_placement(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    return 2 * vertical_placement(n - 1) + Horizontal_placement(n - 2);
}


int vertical_placement(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return vertical_placement(n - 2) + Horizontal_placement(n - 1);
}

int main()
{
    int n;
    cin >> n; //输入盘子数目
    while (n!=-1)
    {
        cout << sum_placement(n)<< endl;
        cin >> n;
    }

    return 0;
}