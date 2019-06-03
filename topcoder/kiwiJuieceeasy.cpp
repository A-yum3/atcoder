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

class KiwiJuiceEasy {
    public: vector<int> thePouring(vector<int> capacities,
                                    vector<int> bottles,
                                    vector<int> fromId, vector<int> toId)
    {
        for(int i = 0; i < fromId.size(); i++) {
            int f =  fromId[i];
            int t = toId[i];
            int space = capacities[t] - bottles[t];

            if(space >= bottles[f]) {
                int vol = bottles[f];
                bottles[t] += vol;
                bottles[f] = 0;
            }
            else {
                int vol = space;
                bottles[t] += vol;
                bottles[f] -= vol;
            }
        }

        return bottles;
    }
}