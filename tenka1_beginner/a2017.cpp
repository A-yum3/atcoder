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
  string s; cin >> s;
  int cnt=0;
  for(int i=0; i < s.length(); i++){
    if(s[i] == '1') cnt++;
  }
  cout << cnt << endl;
}