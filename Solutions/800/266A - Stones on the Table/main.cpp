#include <bits/stdc++.h>
 
using namespace std;
 
int n;
 
int main() {
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            res++;
        }
    }
 
    cout << res << endl;
    return 0;
}