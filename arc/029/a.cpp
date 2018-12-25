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
    int n, t[10], a = 0, b = 0; cin >> n;
    rep(i, n){
        cin >> t[i];
    }

    sort(t, t + n);
    for(int i = n - 1; i >= 0; i--){
        if(b >= a) a += t[i];
        else b += t[i];
    }
    cout << max(a, b) << endl;
    return 0;
}