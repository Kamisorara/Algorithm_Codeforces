#include <bits/stdc++.h>
 
using namespace std;
 
string s1;
 
int main() {
    
    cin >> s1;
    int n = s1.size();
    // get numbers
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            nums.push_back((int)s1[i]);
        }
    }
    
    sort(nums.begin(), nums.end());
    string res = "";
    for (int i = 0; i < nums.size(); i++) {
        if (i != nums.size() - 1) {
            res += nums[i];
            res += '+';
        } else {
            res += nums[i];
        }
    }
    
    cout << res << endl;
    
    return 0;
}