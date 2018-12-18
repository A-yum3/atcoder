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
    int a,b,k; cin >> a >> b >> k;
    for(int i=a; i <= min(b, a + k - 1); i++) printf("%d\n", i);
    for(int i=max(b - k + 1, a + k); i <= b; i++) printf("%d\n", i);
}