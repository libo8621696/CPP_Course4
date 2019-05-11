#include <iostream>
using namespace std;
bool s[10005] = {0};
int main() {
    int L,M;
    cin >> L >> M;
    for (int i = 0; i <= L; i++)
        s[i] = 1;
    while (M--) {
        int a,b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
            s[i] = 0;            
    }
    int count = 0;
    for (int i = 0; i <= L; i++) {
        if (s[i])
            count++;
    }
    cout << count << endl; 

    return 0;
}