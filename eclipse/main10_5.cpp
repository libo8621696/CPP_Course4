#include <iostream>
using namespace std;

int main()
{
    char str[14] = {0}, substr[4] = {0};
    while (cin >> str >> substr)
    {
        int i = 0, posBiggest = 0;
        char strBiggest = 0;
        while (str[i])
        {
            if (str[i] > strBiggest)
            {
                posBiggest = i;
                strBiggest = str[i];
            }
            i++;
        }
        for (int j = 9; j > posBiggest; j--)
        {
            str[j+3] = str[j];
        }
        str[posBiggest+1] = substr[0];
        str[posBiggest+2] = substr[1];
        str[posBiggest+3] = substr[2];
        cout << str << endl;
    }
    return 0;
}
