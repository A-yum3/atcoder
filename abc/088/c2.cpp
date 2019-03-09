#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int grid[3][3];
int x[3], y[3];

int main(){
    rep(i, 3) rep(j, 3) cin >> grid[i][j];
    x[0] = 0;
    rep(i, 3) y[i] = grid[0][i] - x[0];
    rep(i, 3) x[i] = grid[i][0] - y[0];
    bool good = true;
    rep(i, 3) rep(j, 3){
        if(x[i] + y[j] != grid[i][j]) good = false;
    }
    if(good) cout << "Yes" << endl;
    else cout << "No" << endl;
}