#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int main(){
    int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
    int y = ty - sy, x = tx - sx;
    cout << string(y, 'U') << string(x, 'R');
    cout << string(y, 'D') << string(x, 'L');
    cout << 'L' << string(y + 1, 'U') << string(x + 1, 'R') << 'D';
    cout << 'R' << string(y + 1, 'D') << string(x + 1, 'L') << 'U' << endl;
    return 0;
}
