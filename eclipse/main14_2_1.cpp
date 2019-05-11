#include <iostream>
using namespace std;

int main() {
    int n;
    char s[256];
    cin >> n;
    while (n--) {
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'A') s[i] = 'T';
            else if (s[i] == 'T') s[i] = 'A';
            else if (s[i] == 'C') s[i] = 'G';
            else if (s[i] == 'G') s[i] = 'C';
        }
        cout << s << endl;
    }
    return 0;
}