#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int ka[32][32];
int hanbetu[32] = {0};

int main(){
    int n,m; cin >> n >> m;
    rep(i, n){
        int k; cin >> k;
        rep(j, k){
            int a; cin >> a;
            hanbetu[a - 1]++;
        }
    }
    int ans = 0;
    rep(i, m){
        if(hanbetu[i] == n) ans++;
    }
    cout << ans << endl;
    return 0;
}