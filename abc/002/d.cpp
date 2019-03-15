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

int main(){
    bool con[15][15] = {};
    int n, m, x, y;
    cin >> n >> m;
    rep(i, m){
        cin >> x >> y;
        con[x - 1][y - 1] = con[y - 1][x - 1] = true;
    }

    int ans = 0;
    BREP(mask, 1, n){
        if(bitset<32>(mask).count() <= ans) continue;

        bool ok = true;
        rep(i, n) REP(j, 0, i){
            if(mask >> i & mask >> j & 1 && !con[i][j]){
                ok = false;
            }
        }
        if(ok) { ans = bitset<32>(mask).count(); }
    }
    cout << ans << endl;
}