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
    int N, C, K; cin >> N >> C >> K;
    vint T(N);
    rep(i, N) cin >> T[i];
    int ans = 0, i = N - 1;
    while(i){
        int base = T[i];
        int ninzu = 1;
        for(int j = i - 1; j >= 0; j--){
            if(T[j] >= base - K && ninzu <= C){
                ninzu++;
            } else {
                ans++;
                break;
            }
        }
        i -= ninzu;
    }
    cout  << ans << endl;
    return 0 ;
}