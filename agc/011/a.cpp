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
    sort(ALL(T));
    int ans = 1;
    for(int i = 0; i < N;){
        int human = 1;
        for(int j = i + 1; j < N; j++){
            if(human < C && T[j] <= T[i] + K){
                human++;
            } else {
                ans++;
                break;
            }
        }
        i += human;
    }
    cout << ans << endl;
    return 0 ;
}