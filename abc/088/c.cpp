#include <bits/stdc++.h>
using namespace std;
int grid[3][3];
int x[3];
int y[3];
int main() {
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cin >> grid[i][j];
        }
    }
    x[0] = 0;
    for(int i=0; i < 3; i++) y[i] = grid[0][i] - x[0];
    for(int i=0; i < 3; i++) x[i] = grid[i][0] - y[0];
    bool good = true;
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            if(x[i] + y[j] != grid[i][j]) good = false;
        }
    }
    if(good) cout << "Yes" << endl;
    else cout << "No" << endl;
}