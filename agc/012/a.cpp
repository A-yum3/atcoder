#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int main(){
    ll n; cin >> n;
    ll a[3*n];
    for(ll i = 0; i < 3 * n; i++) cin >> a[i];
    sort(a, a+3*n);
    ll ans = 0;
    for(ll i = n; i < 3 * n; i+= 2) ans += a[i];
    cout << ans << endl;
}