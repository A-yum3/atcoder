#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<vector<ll>> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
#define VV(T) vector<vector< T > >
#define brep(i, n) BREP(i, 0, m);
#define BREP(i, x, n) for(int i = x; i < (1<<n); i++)
#define rep(i, n) REP(i, 0, n)
#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define PB push_back
#define MOD 1000000009LL

char board[10][10];

int dfs(int x, int y){
    if(x < 0  || x >= 10 || y < 0 || y >= 10 || board[x][y] == 'x') return 0;
    board[x][y] = 'x';

    return 1 + dfs(x - 1, y) + dfs(x + 1, y) + dfs(x, y - 1) + dfs(x, y + 1);
}

int main(){
    int cnt = 0;
    rep(i, 10) rep(j, 10){
        cin >> board[i][j];
        if(board[i][j] == 'o') cnt++;
    }
    rep(i, 10) rep(j, 10){
        char board2[10][10];
        rep(k, 10) rep(l, 10) board2[k][l] = board[k][l];
        board[i][j] = 'o';
        int count = dfs(i, j);
        rep(k, 10) rep(l, 10) board[k][l] = board2[k][l];
        if(count == cnt + 1){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}