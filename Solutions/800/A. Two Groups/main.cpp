#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
LL T, n;
 
 
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        vector<LL> arr(n);
        LL num;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // sorted this arr find the biggest and smallest one 
        sort(arr.begin(), arr.end());
        LL maxVal = 0;
        bool flag = true;
        if (arr[0] >= 0) {
            flag = false;
            for (int i = 0; i < n; i++) {
                maxVal += arr[i];
            }
            cout << maxVal << endl;
        }
        
        if (flag) {
            LL s1 = 0, s2 = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] >= 0) {
                    s2 += arr[i];
                } else {
                    s1 += abs(arr[i]);
                }
            }
            maxVal = max(s2 - s1, s1 - s2);
            cout << maxVal << endl;
        }
    }
    return 0;
}