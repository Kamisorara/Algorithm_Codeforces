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

int T;
string s;

void solve() {
    cin >> s;
    bool flag = true;
    ll n = s.size();
    int i = 0;
    if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's') {
        i++;
        while (s[i]) {
            if (s[i - 1] == 'Y' && s[i] != 'e') {
                flag = false;
                break;
            }
            if (s[i - 1] == 'e' && s[i] != 's') {
                flag = false;
                break;
            } 
            if (s[i - 1] == 's' && s[i] != 'Y') {
                flag = false;
                break;
            }
            i++;
        }
    } else {
        flag = false;
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        // debug(s[i]);
        cout << "NO" << endl;
    }
}

int main() {
    fast_io;
    cin >> T;
    while (T--) solve();
    return 0;
}