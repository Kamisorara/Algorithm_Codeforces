#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
 
int k, n, w;
 
int main() {
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        n -= (i * k);
    }
    int result = n > 0 ? 0 : abs(n);
    cout << result << endl;
    return 0;
}