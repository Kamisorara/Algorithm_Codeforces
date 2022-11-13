#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        string res = "";
        if (s.size() > 10) {
            res += s[0];
            res += to_string(s.size() - 2);
            res += s[s.size() - 1];
            cout << res << endl;
        } else {
            cout << s << endl;
        }
    }
	return 0;
}