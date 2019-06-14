#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

int n, k;
ll T[100000];

int check(ll P) {
    int i = 0;
    rep(j, k) {
        ll s = 0;
        while(s + T[i] <= P) {
            s += T[i];
            i++;
            if(i == n) return n;
        }
    }
    return i;
}

int solve() {
    ll left = 0;
    ll right = 100000 * 10000;
    ll mid;
    while(right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);
        if(v >= n) right = mid;
        else left = mid;
    }

    return right;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    rep(i, n) cin >> T[i];
    ll ans= solve();
    cout << ans << endl;
}