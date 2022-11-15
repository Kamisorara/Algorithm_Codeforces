#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
LL T, n;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        LL result = 0;
        LL num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            result += num;
        }
        cout << abs(result) << endl;
    }
    return 0;
}