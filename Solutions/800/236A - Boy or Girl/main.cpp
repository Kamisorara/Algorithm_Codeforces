#include <bits/stdc++.h>
 
using namespace std;
 
string s1;
 
int main() {
    
    cin >> s1;
    int n = s1.size();
    string target = "";
    for (int i = 0; i < n; i++) {
        if (target.find(s1[i]) == string::npos) {
            target += s1[i];
        }
    } 
    
    if (target.size() % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}