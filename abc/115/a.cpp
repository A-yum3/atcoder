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
    int d; cin >> d;
    string ans;
    if(d==25) ans = "Christmas";
    else if(d==24) ans = "Christmas Eve";
    else if(d==23) ans = "Christmas Eve Eve";
    else ans = "Christmas Eve Eve Eve";
    cout << ans << endl;
}