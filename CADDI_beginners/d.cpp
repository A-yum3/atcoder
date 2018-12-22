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
  int n; cin >> n;
  bool flg = false;
  rep(i, n){
    int a; cin >> a;
    if(a % 2 == 1) flg = true;
  }
  if(flg) cout << "first" << endl;
  else cout << "second" << endl;
}