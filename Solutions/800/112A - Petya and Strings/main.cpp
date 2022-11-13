#include <bits/stdc++.h>
 
using namespace std;
 
string s1, s2;
 
int main() {
    // s1.size() == s2.size()
    cin >> s1 >> s2;
    int n = s1.size();
    for (int i = 0; i < n; i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = s1[i] + 32;
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z') {
            s2[i] = s2[i] + 32;
        }
    }
    if (s1 < s2) {
        cout << -1 << endl;
    } else if (s1 > s2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}