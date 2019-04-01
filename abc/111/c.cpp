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


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, mx1, mx2, x1, x2; cin >> n;
    int cnt1[100003] = {0}, cnt2[100003] = {0};
    rep (i, n / 2) {
        int a, b; cin >> a >> b; 
        cnt1[a]++;
        if (mx1 < cnt1[a]) {
            mx1 = cnt1[a];
            x1 = a;
        }
        cnt2[b]++;
        if (mx2 < cnt2[b]) {
            mx2  = cnt2[b];
            x2 = b;
        }
    }
    sort(cnt1, cnt1 + 100003);
    sort(cnt2, cnt2 + 100003);

    int ans = INF;
    if (x1 != x2) {
        ans = n - mx1 - mx2;
    } else {
        ans = n - max(mx1 + cnt2[100001], mx2 + cnt1[100001]);
    }

    COUT(ans); 
}