#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int gcd(int a, int b) { return b ? gcd(b, a%b) : a;}

int main(){
    ll n, x; cin >> n >> x;
    int ans;
    rep(i, n){
        int a; cin >> a;
        a = abs(a - x);
        ans = i ? gcd(ans, a) : a;
    }
    cout << ans;
}