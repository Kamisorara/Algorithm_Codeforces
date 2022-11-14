#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
int T, n;
int d[1001];
int a[1001];
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> d[i];
        }
        a[1] = d[1];
        bool flag = true;
        for (int i = 2; i <= n; i++) {
            int val1 = a[i - 1] - d[i];
            int val2 = d[i] + a[i - 1];
            if ((val1 >= 0 && val2 >= 0 && val1 != val2) || val1 < 0 && val2 < 0) {
                cout << -1 << endl;
                flag = false;
                break;
            } else {
                if (val1 < 0) {
                    a[i] = val2;
                } else {
                    a[i] = val1;
                }
            }
        }
        if (flag) {
            for (int i = 1; i <= n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}