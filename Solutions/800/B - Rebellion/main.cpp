#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
 
int T, n;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        vector<LL> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int left = 0, right = n - 1;
        int cnt = 0;
        while (left < right) {
            if (a[right] == 0) {
                if (a[left] == 1) {
                    cnt++;
                    right--;
                }
                left++;
            } else {
                right --;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}