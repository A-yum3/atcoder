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

    int N; cin >> N;
    string s; cin >> s;
    int rui[1000010];
    int ans = 0;
    rui[0] = 0;
    for(int i = 0; i < N; i++) {
        if(s[i] == '#'){
            rui[i + 1] += rui[i] + 1;
        }
        else {
            rui[i + 1] = rui[i];
        }
    }

    for(int i = 0; i < N + 1; i++) {
        if(rui[i] == rui[i + 1] && rui[i] != 0) {
            int count = 0;
            for(count = 2;; count++) {
                if(rui[i] == rui[i+count]) continue;
                break;
            }

            if(count > 2 && count - 1 > rui[i]) {
                for(int i = rui[i]; i > rui[i] - rui[i - 1]; i--) {
                    s[i]
                }
            }
            else {
                s[i + 1] = '#';
                ans++;
            }
            i += count - 1;
        }
    }
    COUT(ans);
}
