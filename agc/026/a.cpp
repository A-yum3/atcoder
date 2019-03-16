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

int a[105];

int main(){
    int N, s; cin >> N;
    rep(i, N) cin >> a[i];
    REP(i, 1, N) if(a[i] == a[i - 1]) s++, i++;
    cout << s << endl;
}