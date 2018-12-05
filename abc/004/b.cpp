#include <bits/stdc++.h>
using namespace std;

char board[4][5];

int solve() {
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            cin >> board[i][j];
        }
    }

    for(int i=3; i >= 0; i--){
        for(int j=3; j >= 0; j--){
            cout << board[i][j];
            if(j) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
}