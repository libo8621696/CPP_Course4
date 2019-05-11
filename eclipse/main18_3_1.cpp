#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码
class Array2
{
private:
    int row;//数组行数
    int column;//数组列数
    int* ptr;//指向二维数组的指针
public:
    Array2()
    {
        ptr = NULL;
    }
    Array2(int paraRow, int paraColumn):row(paraRow),column(paraColumn)
    {
        ptr = new int[row * column];
    }
    Array2(Array2& a):row(a.row),column(a.column)
    {
        ptr = new int[row * column];
        memcpy(ptr, a.ptr, sizeof(int)*row*column);
    }
    Array2& operator= (const Array2 &a)
    {
        if (ptr) delete[] ptr;
        row = a.row;
        column = a.column;
        ptr = new int[row * column];
        memcpy(ptr, a.ptr, sizeof(int)*row*column);
        return *this;
    }
    ~Array2()
    {
        if (ptr) delete[] ptr;
    }
    int* operator [] (int i)
    {
        return ptr + i*column;//重载的实际上是第二维的[]， 第一维的[]直接调用int型一维数组的定义
    }
    int& operator() (int i, int j)
    {
        return ptr[i*column + j];
    }
};
int main() 
{
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
