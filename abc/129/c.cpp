#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
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


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, m; cin >> N >> m;
    vector<int> check(N + 1, true);
    rep(i, m) {
        int a; cin >> a;
        check[a] = false;
    }

    vector<ll> dp(N + 1);
    dp[0] = 1;
    for(int now = 0; now < N; now++) {
        for(int next = now + 1; next <= min(N, now + 2); next++){
            if(check[next]){
                dp[next] += dp[now];
                dp[next] %= MOD;
            }
        }
    }

    COUT(dp[N]);
}