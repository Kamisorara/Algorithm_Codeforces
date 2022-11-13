#include <bits/stdc++.h>

typedef long long LL;

using namespace std;
 
int T;
int n;

int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        // print Number of processes
        cout << (n + 1) / 2 << endl;
        int nums = 3 * n;
        for (int i = nums - 1, j = 0; i >= (nums / 2); i-= 3, j += 3) {
            int x = j + 1;
            int y = i + 1;
            cout << x << " " << y << endl;
        }
    }
    return 0;
}