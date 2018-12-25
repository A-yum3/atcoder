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
    int D, G, p[11], c[11];
    cin >> D >> G;
    rep(i, D){
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;
    for(int mask = 0; mask < (1<<D); ++mask){ //bit探索
        int s = 0, num = 0, rest_max = -1;
        for(int i = 0; i < D; ++i){
            if(mask>>i & 1){ // bit探索部
                s += 100 * (i+1) * p[i] + c[i];
                num += p[i];
                cout << mask << " " <<  i << endl;
            } else {
                rest_max = i;
            }
        }
        if(s < G){ // 必要スコアよりも完全スコアのが高かった時に比較
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
}