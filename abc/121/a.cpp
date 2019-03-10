#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)


int main(){
    int H, W, h, w; cin >> H >> W >> h >> w;
    int table[H][W];
    rep(i, H) rep(j, W) table[i][j] = 1;

    rep(i, h){
        rep(j, W){
            table[i][j] = 0;
        }
    }

    rep(i, w){
        rep(j, H){
            table[j][i] = 0;
        }
    }
    int ans = 0;
    rep(i, H) rep(j, W) if(table[i][j]) ans++;
    cout << ans << endl;
}