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

// 累積和を用いて、リーダーとして仮定した位置よりも左に存在するWをEにする
// その項より左に存在するWの数 +  その項より右に存在するEの数 の最小値を探す。
// その項より右に存在するEの数は、最終稿までに出現したEの数 - その項までに出現したEの数

int main(){
    int N; cin >> N;
    string s; cin >> s;
    vint W(N), E(N);
    //  各EとWに対する累積和を取る前処理
    for(int i = 1; i <= N; i++){
        W[i] += W[i - 1];
        E[i] += E[i - 1];
        if(s[i - 1] == 'W') W[i]++;
        if(s[i - 1] == 'E') E[i]++;
    }
    int mixi =  INF;
    rep(i, N){
        int w = W[i];
        int e = E[N] - E[i + 1];
        mixi = min(mixi, e + w);
    }
    cout << mixi << endl;
}