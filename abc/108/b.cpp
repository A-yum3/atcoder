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
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int x = x2, y = y2;
    int dx = x2 - x1, dy = y2 - y1;
    rep(i, 2){
        swap(dx, dy);
        dx = -dx;
        x += dx;
        y += dy;
        cout << x << " " << y << endl;
    }
}