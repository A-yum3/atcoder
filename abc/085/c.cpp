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
    int n, y; cin >> n >> y;
    int rel10000 = -1, rel5000 = -1, rel1000 = -1;
    rep(i, n + 1){ //10000
        rep(j, n - i + 1){ //5000
            int k = n - i - j;
            int total = 10000*i + 5000*j + 1000*k;
            if(total == y){
                rel10000 = i;
                rel5000 = j;
                rel1000 = k;
            }

        }
    }
    cout << rel10000 << " " << rel5000 << " " << rel1000;
}