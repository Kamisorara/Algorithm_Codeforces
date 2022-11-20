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
 
int n;
int p, q;
 
int main() {
    fast_io;
    cin >> n;
    int cnt = 0;
    while (n--) {
        cin >> p >> q;
        if (q - p >= 2) cnt++; 
    }
    cout << cnt << endl;
    return 0;
}