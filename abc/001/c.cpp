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
    int deg, dis; cin >> deg >> dis;
    string dir[] = {  "N", "NNE", "NE", "ENE",
                        "E", "ESE", "SE", "SSE",
                        "S", "SSW", "SW", "WSW",
                        "W", "WNW", "NW", "NNW","N"
                        };
    int w;
    int wlist[13] = {0,15,93,201,327,477,645,831,1029,1245,1467,1707,1959};
    for(w = 12; w >= 0; w--){
        if(wlist[w] <= dis) break;
    }
    if(w == 0){
        cout << "C " << w << endl;
    } else {
        cout << dir[(deg*10 + 1125) / 2250] << " " << w << endl;
    }
}