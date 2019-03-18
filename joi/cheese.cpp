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

int H, W, N;
int sy, sx;
char maze[1000][1000];
int d[1000][1000];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int bfs(){
    queue<pint> que;
    rep(i, H) rep(j, W) d[i][j] = INF;
    que.push(pint(sy, sx));
    d[sy][sx] = 0;

    int i = 0;
    while(i < N){
        pint p =  que.front(); que.pop();
        rep(i, 4){
            int ny = p.first + dx[i], nx =  p.first + dy[i];
            if(0 <= ny && ny < H && 0 <= nx && nx < W && maze[ny][nx] != 'X' && maze[ny][nx] == i + 1 && )
        }
    }

}

int main(){
    cin >> H >> W >> N;
    rep(i, H) rep(j, W){
        cin >> maze[i][j];
        if(maze[i][j] == 'S'){
            sy = i, sx = j;
        }
    }
    int rel = bfs();
}