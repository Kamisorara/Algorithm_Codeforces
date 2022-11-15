#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
 
LL n, m ,a;
 
int main() {
    cin >> n >> m >> a;
    cout << (LL)ceil(ceil(n / (a * 1.0)) * ceil(m / (a * 1.0))) << endl;
    return 0;
}