#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
LL a[100001], b[100001], c[100001];
int T, n, k;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n >> k;
        a[0] = 0LL;
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            b[i] = a[i] - a[i - 1];
            c[i] = a[i] - a[i - 1];
        }
        if (n != k) {
            b[1] = c[1] = ceil(a[1] * 1.0 / (n - k + 1));
        }
        sort(b + 1, b + k + 1);
        bool flag = true;
        for (int i = 1; i <= k; i++) {
            if (b[i] != c[i]) {
                flag = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
    }
    return 0;
}