
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
 
 
int n ,h;
int q[2010];
 
int main() {
    io;
    io_tie;
    cin >> n >> h; 
    for (int i = 0; i < n; i++) cin >> q[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (q[i] <= h) cnt++;
        else cnt += 2;
    }
    cout << cnt << endl;
    return 0;
}