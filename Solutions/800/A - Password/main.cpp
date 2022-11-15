#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
 
int T, n; 
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        int num;
        for (int i = 0; i < n; i++) {
            cin >> num;
        }
        int m = 10 - n;
        cout << 6 * (m * (m - 1) / 2) << endl;
    }
    return 0;
}