#include <bits/stdc++.h>

typedef long long LL;

using namespace std;
 
int T;
int n;

int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        LL sum = 0, maxSpells = 0;
        LL a, b;
        for (LL i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }

        for (LL i = 0; i < n; i++) {
            cin >> b;
            sum += b;
            // get the biggest one
            if (maxSpells < b) {
                maxSpells = b;
            }
        }
        cout << sum - maxSpells << endl;
    }
    return 0;
}  