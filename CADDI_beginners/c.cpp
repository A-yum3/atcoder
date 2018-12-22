#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(ll i = x; i < n; i++)


int main(){
  ll n, p, ans = 1; cin >> n >> p;

  if(n == 1){
    cout << p << endl;
    return 0;
  }

  for(ll a = 2; a * a <= p; a++){
    ll i = pow(a, n);
    if(p % i == 0){
      ans = a;
    }
  }
  cout << ans << endl;
}