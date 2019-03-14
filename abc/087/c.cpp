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
    int N; cin >> N;
    vector<vector<int>> a(2, vector<int>(N, 0));
    REP(i, 1, N + 1) cin >> a[0][i];
    REP(i, 1, N + 1) cin >> a[1][i];
    REP(i, 1, N + 1){
        a[0][i] += a[0][i - 1];
        a[1][i] += max(a[0][i], a[1][i - 1]);
    }
    cout << a[1][N] << endl;
}