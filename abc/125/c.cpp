#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
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

// ユークリッドの互除法
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(ALL(a));
    ll mgcd1 = 0, mgcd2 = 0, mgcd3 = 0, mgcd4 = 0, mgcd5 = 0, mgcd6 = 0;
    for(ll i = 0; i < n; i++) {
        if(i == n / 2) continue;
        mgcd1 = gcd(a[i], mgcd1);
    }
    for(ll i = 0; i < n; i++) {
        if(i == (n / 2) + 1) continue;
        mgcd2 = gcd(a[i], mgcd2);
    }
    for(ll i = 1; i < n; i++) {
        mgcd3 = gcd(a[i], mgcd3);
    }
    for(ll i = 0; i < n - 1; i++) {
        mgcd4 = gcd(a[i], mgcd4);
    }
    int flg = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] % 2 == 1 && flg == 0) {flg = 1; continue;}
        mgcd5 = gcd(a[i], mgcd5);
    }
    sort(RALL(a));
    flg = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] % 2 == 1 && flg == 0) {flg = 1; continue;}
        mgcd6 = gcd(a[i], mgcd6);
    }
    ll ans = max(mgcd1, mgcd2);
    ans = max(mgcd3, ans);
    ans = max(mgcd4, ans);
    ans = max(mgcd5, ans);
    ans = max(mgcd6, ans);
    COUT(ans);
}