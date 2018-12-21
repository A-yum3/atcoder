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
    int n; cin >> n;
    float ans;
    pint point[110];
    rep(i, n){
        cin >> point[i].first >> point[i].second;
    }
    rep(i, n){
        REP(j, i + 1, n){
            float temp = sqrt(pow(point[j].first - point[i].first, 2)
                            + pow(point[j].second - point[i].second, 2));
            ans = max(temp, ans);
        }
    }
    cout << ans << endl;
}