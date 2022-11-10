#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int T;
    cin >> T;
    int ans = 0;
    while (T--) {
        vector<int> arr;
        int temp = 0;
        for (int i = 0; i < 3; i++) {
            int num;
            cin >> num;
            if (num == 1) {
                temp++;
            }
        }
        if (temp >= 2) {
            ans++;
        }
    }
    cout << ans << endl;
	return 0;
}