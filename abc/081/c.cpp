#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int hyou[200005];

int main(){
    int n, k; cin >> n >> k;
    rep(i, n){
        int a; cin >> a;
        hyou[a - 1]++;
    }
    int ans = 0;
    sort(hyou, hyou + n);
    for(int i = 0; i < n - k; i++){
        ans += hyou[i];
    }
    cout << ans << endl;
}