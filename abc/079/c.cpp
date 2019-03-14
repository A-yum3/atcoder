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
  string s, t; cin >> s;
  int n = s.size() - 1;
  for(int mask = 0; mask < (1 << n); mask++){
    int sum = s[0] - '0';
    t = s[0];
    int a;
    rep(i, n){
      a = s[i + 1] - '0';
      if(mask & (1<<i)){
        sum += a;
        t = t + '+' + s[i + 1];
      }else{
        sum -= a;
        t = t + '-' + s[i + 1];
      }
    }
    if(sum == 7) break;
  }
  cout << t << "=7" << endl;
}