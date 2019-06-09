#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
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

ll pow(ll i, ll j) {
    ll tmp = 1;
    while(j) {
        if(j % 2) tmp = tmp * i % MOD;
        i = i * i % MOD;
        j /= 2;
    }
    return tmp;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll w, h; cin >> w >> h;
    w--; h--;
    ll a = 1, b = 1;
    rep(i, w) a = a * (w + h - i) % MOD;
    for(int i = 2; i <= w; i++) b = b * i % MOD;
    cout << a * pow(b, MOD - 2) % MOD << endl;
}