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
    int n,d,x; cin >> n >> d >> x;
    int rel = 0;
    rep(i, n){
        int a; cin >> a;
        for(int j=1; j <= d; j += a){
            rel++;
        }
    }
    cout << rel + x << endl;
}