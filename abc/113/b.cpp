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
    int n, t, a, ans; cin >> n >> t >> a;
    float maxi = 1000000;
    rep(i, n){
        int h; cin >> h;
        float temp = t - (h * 0.006);
        if(abs(a - temp) < abs(a - maxi)) maxi = temp, ans = i + 1;
    }
    cout << ans << endl;
}