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
    int a, b, c; cin >> a >> b >> c;
    int cnt = 0;
    rep(i, c){
        if( b - a >= 0){
            b -= a;
            cnt++;
        }
    }
    cout << cnt << endl;
}