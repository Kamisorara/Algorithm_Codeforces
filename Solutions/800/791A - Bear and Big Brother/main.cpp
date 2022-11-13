#include <bits/stdc++.h>
 
typedef long long LL;
 
using namespace std;
 
int a, b;
 
int main() {
    cin >> a >> b;
    int cnt = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}