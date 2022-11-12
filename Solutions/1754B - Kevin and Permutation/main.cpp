#include <bits/stdc++.h>
 
typedef long long LL;
 
using namespace std;
 
int T;
int n;
queue<int> q1, q2;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        // first
        for (int i = (n + 1) / 2; i >= 1; i--) {
            q1.push(i);
        }
        // last
        for (int i = n; i >= (n + 1) / 2 + 1; i--) {
            q2.push(i);
        }
        
        // print result
        while (!q1.empty() || !q2.empty()) {
            // at first print the q1's first value
            if (!q1.empty()) {
                cout << q1.front() << " ";
                q1.pop();
            }
            // at second print the q2's first value
            if (!q2.empty()) {
                cout << q2.front() << " ";
                q2.pop();
            }
        }
        cout << endl;
    }
    return 0;
}
