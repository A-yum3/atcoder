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

    string s; cin >> s;
    int ans = 0;
    int f = 0;
    if(s[0] == '1') f = 1;
    REP(i, 1, s.size()) {
        if(i % 2 == 0){
            if(f){
                if(s[i] == '0'){
                    s[i] = '1';
                    ans++;
                }
            }
            else {
                if(s[i] == '1'){
                    s[i] = '0';
                    ans++;
                }
            }
        }
        else {
            if(f) {
                if(s[i] == '1'){
                    s[i] = '0';
                    ans++;
                }
            }
            else {
                if(s[i] == '0'){
                    s[i] = '1';
                    ans++;
                }
            }
        }
    }
    COUT(ans);
}