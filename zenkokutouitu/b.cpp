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
    int n; string a, b, c; cin >> n >> a >> b >> c;
    int ans = 0;
    rep(i, n){
        if(a[i] == b[i] && b[i] == c[i]){
            continue;
        } else if(a[i] == b[i] || b[i] == c[i] || c[i] == a[i]){
            ans++;
        } else {
            ans += 2;
        }
    }
    cout << ans << endl;
}