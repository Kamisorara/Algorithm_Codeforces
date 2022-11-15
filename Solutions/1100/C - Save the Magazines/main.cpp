#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
 
LL T, n;
string s;
const int N = 2e5 + 9;
LL a[N], dp[N][2];
 
void solve() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // init
    dp[0][0] = dp[0][1] = 0;
    if (s[0] == '1') dp[0][0] = a[0];
    for (int i = 1; i < n; i++) {
        if (s[i] == '0') {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = 0;
        } else {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) + a[i];
            if (s[i - 1] == '0') {
                dp[i][1] = dp[i - 1][0] + a[i - 1];
            } else {
                dp[i][1] = dp[i - 1][1] + a[i - 1];
            }
        }
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
}
 
int main() {
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}