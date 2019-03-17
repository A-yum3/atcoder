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
#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define invrep(i, n) for(int i = (n)-1; i >= 0; i--)        // n-1, n-2, ..., 0
#define invREP(i, x, n) for(int i = (n)-1; i >= (x; i--)    // n-1, n-2, ..., x
#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define PB push_back
#define MOD 1000000009LL

int w, h;
int c[60][60];
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

int dfs(int y, int x){
    if(y < 0 || y >= h || x < 0 || x >= w || c[y][x] == 0) return 0;

    c[y][x] = 0;

    rep(i, 8){
        dfs(y + dx[i], x + dy[i]);
    }
    return 1;
    
}

int main(){
    while(cin >> w >> h){
        if(w == 0 && h == 0) break;
        int ans = 0;
        rep(i, h) rep(j, w) cin >> c[i][j];
        rep(i, h) rep(j, w){
            if(dfs(i, j)) ans++;
        }
        cout << ans << endl;
    }
}