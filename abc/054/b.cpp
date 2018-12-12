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
  int N, M, i, j=0; cin >> N >> M;
  string a[N], b[M];
  rep(i, N) cin >> a[i];
  rep(i, M) cin >> b[i];
  while(a[j].find(b[j]) != -1){
    j++;
    if(j == M) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}