#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int main(){
    int N, T[4]; cin >> N;
    rep(i, N) cin >> T[i];
    int ans = INF;
    for(int mask = 0; mask < (1<<N); mask++){
        int t[2] = {};
        rep(i, N) t[(mask>>i) & 1] += T[i];
        ans = min(ans, max(t[0], t[1]));
    }
    cout << ans << endl;
}