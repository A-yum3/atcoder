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
    int N, M, C; cin >> N >> M >> C;
    int B[M];
    int A[N][M];
    rep(i, M) cin >> B[i];
    rep(i, N) rep(j, M) cin >> A[i][j];
    int ans = 0;
    rep(i, N){
        int sum = 0;
        rep(j, M){
            sum += A[i][j] * B[j];
        }
        if(sum + C > 0) ans++;
    }
    cout << ans << endl;
}