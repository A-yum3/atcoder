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
    int D, G, p[11], c[11]; cin >> D >> G;
    rep(i, D) cin  >> p[i] >> c[i];

    int ans = INF;
    for(int mask = 0; mask < (1 << D); ++mask){
        int s = 0, num = 0, rest_max = -1;
        rep(i, D){
            if(mask & (1<<i)){
                s += 100 * (i+1) * p[i] + c[i];
                num += p[i];
            } else  {
                rest_max = i;
            }
        }
        if(s < G){
            int s1 = 100 * (rest_max + 1);
            int need = (G - s + s1 - 1) / s1;
            if(need >= p[rest_max]){
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
    return 0;
}