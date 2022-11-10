#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int M, N;
    cin >> M >> N;
    int dimensions = M * N;
    if (dimensions == 0) {
        cout << 0 << endl;
    } else {
        cout << dimensions / 2 << endl;
    }
}