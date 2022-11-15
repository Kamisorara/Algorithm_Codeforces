#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
 
int T, n;

int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        vector<int> ans(n);
        int l = 0, r = n - 1;
        int index = 0;
        while (l <= r) {
            if (index % 2 == 0) {
                ans[l] = index + 1;
                l++;
            } else {
                ans[r] = index + 1;
                r--;
                
            }
            index++;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
