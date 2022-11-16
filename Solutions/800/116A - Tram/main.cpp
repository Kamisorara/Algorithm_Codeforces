#include <bits/stdc++.h>
using namespace std;
 
int T;
 
int a, b;
int capacity;
int main () {
    cin >> T;
    capacity = 0;
    int maxV = capacity;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        capacity -= a;
        capacity += b;
        maxV = max(maxV, capacity);
    }
    cout << maxV << endl;
    return 0;
}