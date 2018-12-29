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
    int t, a, b, c, d; cin >> t >> a >> b >> c >> d;
    int rel = 0;
    if(t >= a + c){
        rel = b + d;
    } else if(t < a && t < c){
        rel = 0;
    } else if(t >= a && t < c){
        rel = b;
    } else if(t < a && t >= c){
        rel = d;
    } else {
        rel = max(b, d);
    }
    cout << rel << endl;
}