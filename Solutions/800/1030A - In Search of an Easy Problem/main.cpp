#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD le9 + 7
#define sd(n) scanf("%d", &n)
#define sdd(n, m) scanf("%d %d", &n, &m)
#define mem(a, b) memset((a), (b), sizeof(a))
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define debug(a) cout << "Debuging...|" << #a << ": " << a << "\n";
#define MAX 500000 + 50;
typedef long long LL;

int n;
int q[101];

int main() {
    fast_io;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (q[i] == 1) {
            cout << "HARD" << endl;
            flag = false;
            break;
        }
    }
    if (flag) cout << "EASY" << endl;
    return 0;
}

