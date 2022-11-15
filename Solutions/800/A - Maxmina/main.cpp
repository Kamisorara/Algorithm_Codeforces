#include <bits/stdc++.h>
 
using namespace std;
 
int T, n, k;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n >> k;
        int num;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num == 1) {
                flag = true;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}