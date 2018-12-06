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
    int n,m; cin >> n >> m;
    double a = (n % 12) * 30 + m * 0.5, b = m * 6;
    double ans = abs(a-b);
    cout << min(ans, 360.0 - ans) << endl;
}