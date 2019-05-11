#include<iostream>
using namespace std;
char man; //一般以第一个字符为男孩，标记为man

// 定义一个递归函数，其中的参数char str[] 为字符串
// int s 表示开始位置
// 返回右括号的位置
int function(char str[], int s)
{
	int n;
	if(str[s] != man)
	{
		return s;
	}
	else
	{
		n = function(str, s+1);
		cout << s << ' ' << n << endl;
		return function(str, n + 1);
	}
}

int main()
{
	char str[101] = {'\0'};
	cin >> str;
	man = str[0];
	int n = function(str, 1);
	cout << "0" << ' '<< n << endl;
	return 0;
}