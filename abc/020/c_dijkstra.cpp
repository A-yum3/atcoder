#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const ll INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> P;
typedef pair<ll, ll> PL;
typedef map<int, int> mi;
typedef set<int> si;
#define VV(T) vector<vector< T > >
#define dump(x)  cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl

#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define FOREACH(x,a) for(auto& (x) : (a) )

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define pb push_back
#define pu push
#define mp make_pair
#define fi first
#define sc second

#define COUT(x) cout << (x) << endl
#define VECCIN(x) for(auto&youso_: (x) )cin>>youso_
#define VECCOUT(x) for(auto&youso_: (x) )cout<<youso_<<" ";cout<<endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef tuple<ll, int, int> T;
int h, w, t;
string s[12];
int sx, sy, gx, gy;
int dy[] = {1, 0, 0, -1};
int dx[] = {0, 1, -1, 0};

bool dijkstra(int m) {
    ll d[12][12];
    rep(i, 12) rep(j, 12) d[i][j] = INF * 10;
    priority_queue<T, vector<T>, greater<T> > q;
    q.push(make_tuple(0, sy, sx));
    d[sy][sx] = 0;
    while(!q.empty()) {
        ll c; int y, x;
        tie(c, y, x) = q.top(); q.pop();
        rep(i, 4) {
            int ny = y + dy[i], nx = x + dx[i];
            if(!(0 <= ny && ny < h && 0 <= nx && nx < w)) continue;
            if(s[ny][nx] == '#') {
                if(d[ny][nx] > c + m) {
                    d[ny][nx] = c + m;
                    q.push(make_tuple(c + m, ny, nx));
                }
            } else {
                if(d[ny][nx] > c + 1) {
                    d[ny][nx] = c + 1;
                    q.push(make_tuple(c + 1, ny, nx));
                }
            }
        }
    }
    if(d[gy][gx] <= t) return true;
    else return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w >> t;
    rep(i, h) cin >> s[i];
    rep(i, h) rep(j, w) {
        if(s[i][j] == 'S') {
            sy = i; sx = j;
        } else if(s[i][j] == 'G') {
            gy = i; gx = j;
        }
    }

    ll l = 1, r = INF;
    while(r - l > 1) {
        int x = (l + r) / 2;
        if(dijkstra(x)) l = x;
        else r = x;
    }
    COUT(l);
}