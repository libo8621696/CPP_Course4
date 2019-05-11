#include <iostream>
#include <iomanip> 
using namespace std;
int f(double *cd, int m, double a) {
    int i;
    for (i = 0; i < m; i++) {
        if (*(cd+i) >= a)
            return i;
    }
    if (i == m) return m;
    
}
int main() {
    int m;
    double a;
    int id[1000];
    double cd[1000];
    cin >> m >> a;
    for (int i = 0; i < m; i++) {
        cin >> id[i] >> cd[i];
    } 
    // 排序
    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < m - i - 1; j++) {
            if (cd[j+1] < cd[j]) {
                int temid = id[j];
                id[j] = id[j+1];
                id[j+1] = temid;
                double temcd = cd[j];
                cd[j] = cd[j+1];
                cd[j+1] = temcd;            }
        } 
    int q = f(cd,m,a);
    if (q == m)
        cout << "None." << endl;
    for (int i = m - 1;i >= q;i--) {
        cout << setfill('0') << setw(3) << id[i]  << ' '
            << fixed << setprecision(1) << cd[i] << endl; 
    }
    return 0;
}