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
  int N,T[100000],sum=0; cin >> N;
  int i,j,p,x;
  rep(i, N){
    cin >> T[i];
    sum += T[i];
  }
  int M; cin >> M;
  while(M--) {
    cin >> p >> x;
    cout << sum + x - T[p-1] << endl;
  }
}