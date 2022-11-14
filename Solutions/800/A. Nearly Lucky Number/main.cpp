#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
 
string s;
 
int main() {
    cin >> s;
    int n = s.size();
    int luckyNum = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '4' || s[i] == '7') {
            luckyNum++;
        }
    }
    if (luckyNum == 4 || luckyNum == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}