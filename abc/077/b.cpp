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
    int n, rel = 0; cin >> n;
    for(int i = 1;; i++){
        if(i * i > n){
            cout << (i-1) * (i-1) << endl;
            return 0;
        }
    }
}
