#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr;
    int res = 0;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int target = arr[t - 1];
    for (auto & a : arr) {
        if (a != 0 && a >= target) {
            res++;
        }
    }
    cout << res << endl;
	return 0;
}