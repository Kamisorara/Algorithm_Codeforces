#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int num;
        cin >> num;
        string s;
        cin >> s;
        int res = 0;
        for (auto &ch : s) {
            if (ch == 'Q') {
                res++;
            } else {
                if (res != 0) {
                    res--;
                }
            }
        }
        if (res == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
	return 0;
}