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
  ll n, h, w, cnt=0; cin >> n >> h >> w;
  rep(i, n){
    ll a,b; cin >> a >> b;
    if(h <= a && w <= b) cnt++;
  }
  cout << cnt << endl;
}