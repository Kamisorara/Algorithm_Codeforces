#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define sd(n) scanf("%d",&n)
#define sdd(n,m) scanf("%d %d",&n,&m)
#define mem(a,b) memset((a),(b),sizeof(a))
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define io ios::sync_with_stdio(false)
#define debug(a) cout << "Debuging...|" << #a << ": " << a << "\n";
typedef long long ll;
#define MAX 500000 + 50
 
int T;
int n;
char curr;
string s;
 
void solve() {
    cin >> n >> curr;
    cin >> s;
    s = s + s;
    int ans = 0, last = 0;
    for (int i = (2 * n - 1); i >= 0; i--) {
        if (s[i] == 'g') last = i;
        if (s[i] == curr) ans = max(ans, last - i);
    }
    cout << ans << endl;
}
 
int main() {
    io;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;    
}