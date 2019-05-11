#include<iostream>
using namespace std;
void Reverse(int a[], int beg, int en)
{
	while(beg < en)
	{
		//用异或操作符实现元素交换
		a[beg]^=a[en];
		a[en]^=a[beg];
		a[beg]^=a[en];
		beg++;
		en--;
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//编程珠玑里面的旋转法, 123abc, m = 3 => abc123
	// 1: 对123 => 321abc
	// 2: 对abc => 321cba
	// 3: 对321cba => abc123

	m = m%n; // 当m > n 时,移动的结果和取余后移动的结果是一样的
	Reverse(arr, 0, n-m-1);
	Reverse(arr, n-m, n-1);
	Reverse(arr, 0, n-1);

	for(int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << " ";
	}

	cout << arr[n - 1];

	cout << endl;

	return 0;

}