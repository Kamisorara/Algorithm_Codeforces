#include <bits/stdc++.h>
 
typedef long long LL;
 
using namespace std;
 
int T;
int n;

int main() {
    cin >> T;
    while (T--) {
        int n;
        int num;
        int minVal = INT_MAX;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> num;
            arr[i] = num;
            minVal = min(minVal, num);
        }
        if (arr[0] == minVal) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}