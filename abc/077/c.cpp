#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
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


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n; cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    sort(ALL(a));
    sort(ALL(b));
    sort(ALL(c));

    ll sum = 0;
    rep(i, n) {
        auto iter_a = lower_bound(ALL(a), b[i]);
        auto iter_c = upper_bound(ALL(c), b[i]);
        ll idx_a = distance(a.begin(), iter_a);
        ll idx_c = c.size() - distance(c.begin(), iter_c);
        sum += idx_a * idx_c;
    }
    COUT(sum);
}