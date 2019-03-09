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
    int n; cin >> n;
    ll s1 = 0, s2 = 0, c1 = 0, c2 = 0, a;
    REP(i, 1, n + 1){
        cin >> a;
        s1 += a;
        s2 += a;
        if(i % 2 == 0){
            if(s1 >= 0) c1 += 1 + s1, s1 = -1;
            if(s2 <= 0) c2 += 1 - s2, s2 = 1;
        }
        else {
            if(s1 <= 0) c1 += 1 - s1, s1 = 1;
            if(s2 >= 0) c2 += 1 + s2, s2 = -1;
        }
    }
    cout << min(c1, c2) << endl;
    return 0;
}