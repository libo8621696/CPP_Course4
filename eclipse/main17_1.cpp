#include<iostream>
using namespace std;
class A{
public:
    int val;
    A(){
        a = 0;
    }
    A(int v){
        val = v;
    }
    A& GetObj(){
        return *this;
    }
};
int main(){
    A a;
    cout<<a.val<<endl;
    a.GetObj() = 5;
    count<<a.val<<endl;
}