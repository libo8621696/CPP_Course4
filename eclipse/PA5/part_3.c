#include <iostream>
//#include <iomanip> 这是使用控制符控制输出格式
using namespace std;

int main()
{
    int a;
    cin >> a;

    //用流对象的成员函数控制输出格式
    //cout.setf(ios::showbase);  //强制输出整数的基数（八进制数以0开头，十六进制数以0x开头）
    cout.unsetf(ios::dec);  //清除默认10进制输出格式
    cout.setf(ios::hex);  
    cout << a << endl;
    cout.unsetf(ios::hex);  //清除16进制输出格式

    cout.width(10);
    cout.fill('0');
    cout << a << endl;

    return 0;
}
