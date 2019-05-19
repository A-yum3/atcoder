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

int count(const string &S) {
    int res = 0;
    for (int i = 0; i + 1 < S.size(); ++i) {
        if (S[i] == 'A' && S[i + 1] == 'B') ++res;
    }
    return res;
}

int N;
vector<string> S;

ll solve() {
    ll res = 0;
    for (int i = 0; i < N; i++) res += count(S[i]);

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < N; i++) {
        if (S[i][0] == 'B' && S[i].back() == 'A') ++a;
        else if(S[i].back() == 'A') ++b;
        else if(S[i][0] == 'B') ++c;
    }
    ll add = 0;
    if (b + c == 0) add = max(0, a - 1);
    else add = a + min(b, c);

    res += add;
    return res;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> N) {
        S.resize(N);
        for (int i = 0; i < N; i++) cin >> S[i];
        cout << solve() << endl;
    }
}