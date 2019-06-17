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

int H, W;
char s[51][51];
int dist[51][51];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int sy = 0, sx = 0;

int dfs(){
    queue<pint> que;
    rep(i, H) rep(j, W) dist[i][j] = -1;
    int gy = H - 1, gx = W - 1;
    que.push(pint(sy, sx));
    dist[sy][sx] = 0;

    while(que.size()){
        pint p = que.front(); que.pop();
        if(p.first == gy && p.second == gx) break;

        rep(i, 4){
            int ny = p.first + dx[i], nx = p.second + dy[i];
            if(0 <= ny && ny < H && 0 <= nx && nx < W && s[ny][nx] == '.' && dist[ny][nx] == -1){
                dist[ny][nx] = dist[p.first][p.second] + 1;
                que.push(pint(ny, nx));
            }
        }
    }
    return dist[gy][gx];
}

int main(){
    cin >> H >> W;
    int cnt = 0;

    rep(i, H) rep(j, W){
        cin >> s[i][j];
        if(s[i][j] == '.') cnt++;
    }

    int rel = dfs();
    if(rel == -1) COUT(-1);
    else COUT(cnt - rel - 1);
}