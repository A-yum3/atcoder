#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

string board[8];
int cnt=3;

bool check(int a, int b){
    board[a][b] = 'Q';
    rep(i, 8){
        if(b == i) continue;
        if(board[a][i] == 'Q') return false;
    }

    rep(j, 8){
        if(a == j) continue;
        if(board[j][b] == 'Q') return false;
    }

    for(int i=0, j=0; i < 8 && j < 8; i++, j++){
        if(a == j && b == i) continue;
        if(board[j][i] == 'Q') return false;
    }
    cnt++;
    return true;
}

int main(){
    rep(i, 8){
        cin >> board[i];
    }

    rep(i, 8){
        rep(j, 8){
            if(!check(i, j)) board[i][j] = '.';
        }
    }
    if(cnt == 8){
        rep(i, 8) cout << board[i] << endl;
    } else {
        cout << "No Answer" << endl;
    }
}