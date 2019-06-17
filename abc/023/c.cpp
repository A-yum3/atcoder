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

int Gc[102000], Gr[100020];
int row[102000], col[102000];
int x[102000], y[102000];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int r, c, k, n; cin >> r >> c >> k >> n;
    rep(i, n) {
        cin >> y[i] >> x[i];
        y[i]--; x[i]--;
        Gr[y[i]]++;
        Gc[x[i]]++;
    }
    rep(i, r) row[Gr[i]]++;
    rep(i, c) col[Gc[i]]++;

    ll ans = 0;
    rep(i, k + 1) {
        ans += row[i] * col[k - i];
    }

    rep(i, n) {
        if(Gr[y[i]] + Gc[x[i]] == k + 1) ans++;
        if(Gr[y[i]] + Gc[x[i]] == k) ans--;
    }
    cout << ans << endl;
}