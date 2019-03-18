#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<vector<ll>> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
typedef map<int, int> mi;
typedef set<int> si;
#define VV(T) vector<vector< T > >

#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define invrep(i, n) for(int i = (n)-1; i >= 0; i--)        // n-1, n-2, ..., 0
#define invREP(i, x, n) for(int i = (n)-1; i >= (x; i--)    // n-1, n-2, ..., x
#define FOREACH(x,a) for(auto& (x) : (a) )

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define PB push_back

#define COUT(x) cout << (x) << endl
#define VECCIN(x) for(auto&youso_: (x) )cin>>youso_
#define VECCOUT(x) for(auto&youso_: (x) )cout<<youso_<<" ";cout<<endl

char c[50][50];
int R, C, sy, sx, gy, gx;
int d[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int bfs(){
    queue<pint> que;
    rep(i, R)  rep(j, C) d[i][j] = INF;
    que.push(pint(sy, sx));
    d[sy][sx] = 0;

    while(que.size()){
        pint p = que.front(); que.pop();
        if(p.first == gy && p.second == gx) break;
        rep(i, 4){
            int ny = p.first + dx[i], nx = p.second + dy[i];
            if(0 <= ny && ny < R && 0 <= nx && nx < C && c[ny][nx] != '#' && d[ny][nx] == INF){
                que.push(pint(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gy][gx];
}

int main(){
    cin >> R >> C >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--;
    rep(i, R) rep(j, C) cin >> c[i][j];
    int rel = bfs();
    COUT(rel);
}