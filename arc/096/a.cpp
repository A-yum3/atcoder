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
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    c = min(a + b, c * 2), a = min(a, c), b = min(b, c);
    int r = min(x, y);
    cout << (x - r) * a + (y - r) * b + r * c << endl;
}