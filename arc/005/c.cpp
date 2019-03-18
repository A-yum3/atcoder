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
char c[500][500];
int dist[500][500];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int sy, sx, gy, gx;


int main(){
    cin >> H >> W;
    rep(i, H) rep(j, W){
        cin >> c[i][j];
        if(c[i][j] == 's') if(j >= 0) sy = i, sx = j;
        if(c[i][j] == 'g') if(j >= 0) gy = i, gy = j;
    }

    rep(i, H) rep(j, W) dist[i][j] = INF;
    dist[sy][sx] = 0;

    deque<pint> dque;
    dque.push_back({sy, sx});

    while(dque.size()){
        auto p = dque.front(); dque.pop_front();
        int i = p.first, j = p.second;
        rep(k, 4){
            int ny = i + dx[k], nx = j + dy[k];
            if(ny < 0 || ny >= H || nx < 0 || nx >= W) continue;

            bool wall = (c[i][j] == '#');
            int d2 = dist[i][j] + wall;

            if(dist[ny][nx] > d2){
                dist[ny][nx] = d2;
                if(wall){
                    dque.push_back({ny, nx});
                } else {
                    dque.push_front({ny, nx});
                }
            }
        }
    }
    cout << (dist[gy][gx] <= 2 ? "YES" : "NO") << endl;
    return 0;
}