#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int h[110] = {0};

int main(){
    int n; cin >> n;
    rep(i,n){
        cin >> h[i];
    }

    int ans = 0;
    int active = 0;
    rep(i,n){
        if(active >= h[i]){
            active = h[i];
        } else {
            ans += h[i] - active;
            active = h[i];
        }
    }
    cout << ans << endl;
}