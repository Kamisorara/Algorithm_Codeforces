#include <bits/stdc++.h>
using namespace std;
 
int n;
string s;
 
int main () {
    cin >> n;
    cin >> s;
    int a = 0, b = 0;
    for (auto ch : s) {
        if (ch == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if (a > b) {
        cout << "Anton" << endl;
    } else if (a < b) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}