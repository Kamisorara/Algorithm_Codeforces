#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
 
LL n, k;
 
int main() {
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }
    cout << n << endl;
    return 0;
}