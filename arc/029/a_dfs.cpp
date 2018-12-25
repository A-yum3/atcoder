#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int t[100];
int n, ans = 10000000;

void dfs(int i, int a, int b){
    if(i == n) ans = min(ans, max(a, b));
    else{
        dfs(i + 1, a + t[i], b);
        dfs(i + 1, a, b + t[i]);
    }
}

int main(){
    cin >> n;
    for(int i=0; i < n; i++) cin >> t[i];
    dfs(0, 0, 0);
    cout << ans << endl;
}