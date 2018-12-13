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
    string o,e,ans;
    cin >> o >> e;
    rep(i, o.size()){
        cout << o[i];
        if(i < e.size()) cout << e[i];
    }
}