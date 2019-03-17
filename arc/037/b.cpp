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

int G[110][110] = {{0}};
bool flag[110] = {};
bool f;
int N, M;


void dfs(int x){

    if(flag[x] == true){
        f = false;
        return;
    }

    flag[x] = true;

    rep(i, N){
        if(G[x][i]){
            G[x][i] = G[i][x] = 0;
            dfs(i);
        }
    }
}


int main(){
    int u, v, cnt = 0; cin >> N >> M;
    rep(i, M){
        cin >> u >> v;
        u--; v--;
        G[u][v] = G[v][u] = 1;  
    }

    rep(i, N){
        if(flag[i]) continue;
        f = true;
        dfs(i);
        if(f) cnt++;
    }
    cout << cnt << endl;
    return 0;
}