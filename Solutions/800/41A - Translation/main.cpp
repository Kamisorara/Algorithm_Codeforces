#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD le9 + 7
#define sd(n) scanf("%d", &n)
#define sdd(n, m) scanf("%d %d", &n, &m)
#define mem(a, b) memset((a), (b), sizeof(a))
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define io ios::sync_with_stdio(false)
#define io_tie cin.tie(0)
#define debug(a) cout << "Debuging...|" << #a << ": " << a << "\n";
#define MAX 500000 + 50;
typedef long long LL;

string s1, s2;

void solve (string s1, string s2) {
    int n = s1.size();
    bool flag = true;
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        if (s1[i] != s2[j]) {
            cout << "NO" << endl;
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES" << endl;
}

int main() {
    io;
    io_tie;
    cin >> s1 >> s2;
    bool flag = true;
    if (s1.size() != s2.size()) {
        flag = false;
        cout << "NO" << endl;
    }
    if (flag) solve(s1, s2);
    return 0;
}

