#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int N,A,sum,ans;
int a[101];

int main(){
  cin >> N;
  rep(i, N) cin >> a[i], sum += a[i];
  rep(i, N) {A += a[i] - sum / N; if(A) ++ans;}
  if(sum%N) ans = -1;
  cout << ans << endl;
}