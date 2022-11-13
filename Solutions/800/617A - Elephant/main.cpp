#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
 
int x;
 
int main() {
    cin >> x;
    int cnt = 0;
    while (x) {
        if (x > 5) {
            x -= 5;
            cnt++;
        } else {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}