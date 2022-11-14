#include <bits/stdc++.h>
typedef long long LL;
 
using namespace std;
 
string s;
 
int main() {
    cin >> s;
    int n = s.size();
    int lowerNumber = 0, upperNumber = 0;
    for (auto& ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            lowerNumber++;
        } else {
            upperNumber++;
        }
    }
    if (lowerNumber == upperNumber) {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    } else if (lowerNumber < upperNumber) {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}