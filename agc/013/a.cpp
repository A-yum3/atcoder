#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)


int main(){
    int N, ans = 1; cin >> N;
    vint A(N);
    rep(i, N) cin >> A[i];
    bool up = false, down = false;
    rep(i, N - 1){
        if(A[i] < A[i + 1]) up = true;
        if(A[i] > A[i + 1]) down = true;
        if(up && down){
            up = false, down = false, ans++;
        }
    }
    cout << ans << endl;
    return 0;
}