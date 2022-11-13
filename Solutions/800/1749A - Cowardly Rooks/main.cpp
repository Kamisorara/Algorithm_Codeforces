#include <bits/stdc++.h>
 
using namespace std;
 
int T;
int m, n;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n >> m;
        int a, b;
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
        }
        if (n <= m) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }    
    return 0;
}