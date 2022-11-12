#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int T;
    cin >> T;
    int val = 0;
    while (T--) {
        string s;
        cin >> s;
        for (auto &ch : s) {
            if (ch == '+') {
                val++;
                break;
            } else if (ch == '-') {
                val--;
                break;
            }
        }
    }
    cout << val << endl;
    return 0;
}