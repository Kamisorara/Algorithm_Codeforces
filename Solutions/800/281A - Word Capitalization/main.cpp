#include <bits/stdc++.h>
 
using namespace std;
 
string s1;
 
int main() {
    
    cin >> s1;
    int n = s1.size();
    if (s1[0] <= 'z' && s1[0] >= 'a') {
        s1[0] = s1[0] - 32;
    }
    cout << s1 << endl;
    return 0;
}