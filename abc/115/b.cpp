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
    int n, sum = 0, maxi = 0; cin >> n;
    rep(i, n){
        int p; cin >> p;
        sum += p;
        maxi = max(maxi, p);
    }
    cout << sum - maxi / 2 << endl;
}