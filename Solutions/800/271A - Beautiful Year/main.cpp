#include <bits/stdc++.h>
using namespace std;
 
int y;
 
bool check (int biggerYear) {
    vector<int> a(4);
    int i = 0;
    while (biggerYear) {
        int m = biggerYear % 10;
        a[i++] = m;
        biggerYear /= 10;
    }
    
    for (int k = 0; k < 4; k++) {
        for (int j = k + 1; j < 4; j++) {
            if (a[k] == a[j]) {
                return false;
            }
        }
    }
    return true;
}
 
int main () {
    cin >> y;
    while (1) {
        int bigger = ++y;
        if (check(bigger)) {
            cout << bigger << endl;
            break;
        }
    }
    return 0;
}