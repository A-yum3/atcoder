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

    int n; cin >> n;
    vector<string> ab(n);
    vector<string> bonly(n);
    string gomi = "";
    string ans = "";
    int ci = 0, cj = 0;
    rep(i, n) {
        string s; cin >> s;
        if(s[s.size()] == 'A') {ab.push_back(s); ci++;}
        else if(s[0] == 'B') {bonly.push_back(s); cj++;}
        else gomi = gomi + s;
    }

    int i = 1, j = 0;
    ans = ab[0];
    while(i != ci && cj != j) {
        if(ans[ans.size()] == 'A') {
            ans = ans + bonly[j++];
        }
        else if(ans[0] == 'B') {
            ans = ab[i++] + ans;
        }
        else if(ci == i){
            ans = bonly[j++] + ans;
        }
        else if(cj == j) {
            ans = ans + ab[i++];
        }
    }
    ans = ans + gomi;
    int rel = 0;
    rep(k, n - 1) {
        if(ans[k] == 'A' && ans[k + 1] == 'B') rel++;
    }
    COUT(rel);

}