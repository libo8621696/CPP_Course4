#include<iostream>
#include<cstring>
using namespace std;
class CArray
{
	int size;    // number of the elements in the array
	int *ptr;    // point to the array allocated dynamically
public:
	CArray(int s = 0);
	CArray(const CArray& a);
	~CArray();
	void push_back(int v);   // add the element v at the back of the array
	CArray& operator=(const CArray&a);   // assignment between objects
	int length(){return size;}
	int& operator[](int i)
	{
		return ptr[i];//for visiting the array element in accordance with the subscript
	}
};

CArray::CArray(int s):size(s)
{
	if(s == 0)
		ptr = NULL;
	else
		ptr = new int[s];
}

CArray::CArray(const CArray&a)
{
	if(!a.ptr)
	{
		ptr = NULL;
		size = 0;
		return ;
	}
	ptr = new int[a.size];
	memcpy(ptr, a.ptr, sizeof(int) * a.size);
	size = a.size;
}

CArray::~CArray()
{
	if(ptr) delete[] ptr;
}

CArray&CArray::operator=(const CArray&a)
{
	if(ptr = a.ptr)
		return *this;
	if(a.ptr == NULL)
	{
		if(ptr)
			delete[] ptr;
		ptr = NULL;
		size = 0;
		return *this;
	}
	if(size < a.size)// if the original space is not big enough, we donot need to assign new space for it
	{
		if(ptr)
			delete[] ptr;
		ptr = new int[a.size];
	}
	memcpy(ptr, a.ptr, sizeof(int)*a.size);
	size = a.size;
	return *this;
}

void CArray::push_back(int v)
{
	if(ptr)
	{
		int *tmpPtr = new int[size+1];
		memcpy(tmpPtr, ptr, sizeof(int) * size);
		delete[] ptr;
		ptr = tmpPtr;
	}
	else
	{
		ptr = new int[1];
	}
	ptr[size++] = v;
}

int main()
{
	CArray a;
	for(int i = 0; i < 5; ++i)
	{
		a.push_back(i);
	}
	CArray a2, a3;
	a2 = a;
	for(int i = 0; i< a.length(); ++i)
	{
		cout << a2[i] << " ";
	}
	a2 = a3;
	for(int i = 0;i < a2.length();++i)
	{
		cout << a2[i] <<" ";
	}
	cout << endl;
	a[3] = 100;
	CArray a4(a);
	for(int i = 0; i < a4.length(); ++i)
	{
		cout << a4[i] << " ";
	}
	return 0;
}