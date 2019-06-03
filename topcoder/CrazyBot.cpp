#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PI;
typedef pair<ll, ll> PL;
typedef map<int, int> MI;
typedef set<int> SI;
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
#define COUT(x) cout << (x) << endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool board[100][100] = {false};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
double kakuritu[4];

class CrazyBot {
    public: double getProbability(int n, int east, int west, int south, int north) {
        kakuritu[0] = east / 100;
        kakuritu[1] = west / 100;
        kakuritu[2] = south / 100;
        kakuritu[3] = north / 100;

        return dfs(50, 50, n);
    }

    double dfs(int x, int y, int n) {
        if(board[x][y]) return 0;
        if(n == 0) return 1;

        board[x][y] = true;
        double ret = 0;
        for(int i = 0; i < 4; i++) {
            ret += dfs(x + dx[i], y + dy[i], n - 1) * kakuritu[i];
        }
        board[x][y] = false;
        return ret;
    }
};