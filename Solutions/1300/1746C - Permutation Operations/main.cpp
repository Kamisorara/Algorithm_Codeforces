#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD le9 + 7
#define sd(n) scanf("%d", &n)
#define sdd(n, m) scanf("%d %d", &n, &m)
#define mem(a, b) memset((a), (b), sizeof(a))
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define debug(a) cout << "Debuging...|" << #a << ": " << a << "\n";
#define MAX 500000 + 50;
typedef long long ll;
 
int T, n;
 
int main() {
    fast_io;
    cin >> T;
    while (T--) {
        cin >> n;
        map<int, int> m;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            m[x] = i + 1;
        }
        vector<int> ans(n);
        for (int i = 1; i <= n; i++) {
            int pos = m[i];
            if (pos == n) {
                ans[i - 1] = 1;
            } else {
                ans[i - 1] = pos + 1;
            }
        }
        for (int n : ans) {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}