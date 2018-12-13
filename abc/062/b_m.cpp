#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int h,w;
string a,x;
int main(){
    cin >> h >> w;
    rep(i, w+2) x += '#';
    cout << x << endl;
    while(h--) cin >> a, cout << '#' << a << '#' << endl;
    cout << x << endl;
    return 0;
}