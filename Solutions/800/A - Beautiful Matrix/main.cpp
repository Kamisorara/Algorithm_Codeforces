#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            cin >> num;
            matrix[i][j] = num;
        }
    }
 
    int x, y;
    
    // get position in the matrix of '1'
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                x = i;
                y = j;   
            }
        }
    }
 
    int cnt = 0;
    while (x != 2 || y != 2) {
        if (x != 2) {
            if (x > 2) {
                x--;
            } else if (x < 2) {
                x++;
            }
            cnt++;
        }
        if (y != 2) {
            if (y > 2) {
                y--;
            } else if (y < 2) {
                y++;
            }
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}