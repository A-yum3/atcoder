#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<vector<ll>> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
#define VV(T) vector<vector< T > >
#define brep(i, n) BREP(i, 0, m);
#define BREP(i, x, n) for(int i = x; i < (1<<n); i++)
#define rep(i, n) REP(i, 0, n)
#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define PB push_back
#define MOD 1000000009LL

map<char, ll> m;

std::vector<std::vector<long long>> comb(int n, int r) {
  std::vector<std::vector<long long>> v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}

int main(){
    int N; string S; cin >> N >> S;
    rep(i, N){
        m[S[i]]++;
    }

    ll ans = 0;

    REP(i, 1, N){
        ans += comb(N, i) % MOD;
    }

    

}