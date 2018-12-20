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
    ll f[10000000] ={0,0,0,1};
    for(int i=4; i <= n; ++i) f[i] = (f[i-1]+f[i-2]+f[i-3])%10007;
    return cout <<f[n] << endl,0;
}