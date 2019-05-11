#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    Complex & operator=(string s)
    {
    	int position = s.find("+", 0);
    	string firstpart = s.substr(0, position);
    	string secondpart = s.substr(position+1, s.length()- position - 2);
    	r = atof(firstpart.c_str());
    	i = atof(secondpart.c_str());
    	return *this;
    }
// 在此处补充你的代码
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}