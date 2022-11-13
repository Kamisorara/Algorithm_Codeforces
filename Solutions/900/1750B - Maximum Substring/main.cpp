#include <bits/stdc++.h>
 
typedef long long LL;
 
using namespace std;
 
LL T;
LL n;
 
int main() {
    cin >> T;
    while (T--) {
        string s;
        cin >> n >> s;
        LL cntZero = 0;
        for (auto ch : s) {
            if (ch == '0') {
                cntZero++;
            }
        }
        LL ans = 0;
        LL i = 0, j = 0;
        while (i < n) {
            // find the same one in order to get the square value
            while (j < n && s[i] == s[j]) j++;
            ans = max(ans, (j - i) * (j - i));
            i = j;
        }
        // we get the number of zero in the binary string before, so we can get the multipy value, if this one is biggest then we return else  we return the square value
        ans = max(ans, cntZero * (n - cntZero));
        cout << ans << endl;
    }
    return 0;
}