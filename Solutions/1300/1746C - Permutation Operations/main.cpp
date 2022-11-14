#include <bits/stdc++.h>
 
using namespace std;
 
int T, n;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        map<int, int> m;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            m[x] = i + 1;
        }
        vector<int> ans(n);
        for (int i = 1; i <= n; i++) {
            int pos = m[i];
            if (pos == n) {
                ans[i - 1] = 1;
            } else {
                ans[i - 1] = pos + 1;
            }
        }
        for (int n : ans) {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}