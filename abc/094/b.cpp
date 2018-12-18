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
    int n,m,x; cin >> n >> m >> x;
    int rel = 0, a[100] = {0};
    rep(i, m){
        int temp; cin >> temp;
        a[temp]++;
    }
    int zero = 0, maxi = 0;
    for(int i = x; i < n; i++) maxi += a[i];
    for(int i = x; i > 0; i--) zero += a[i];
    cout << min(maxi, zero) << endl;
}