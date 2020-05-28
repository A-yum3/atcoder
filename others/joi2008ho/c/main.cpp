/*
　　こんにちは。あたしはｶｳｶﾞｰﾙ。
　　redcoderになるためAtCoderを巡る旅をしてます。

　　　 　 ＿_
　　　 ヽ|＿_|ノ　　　　ﾓｫ
　　　　||‘‐‘||ﾚ　　_)_, ―‐ 、
　　　　/(Ｙ (ヽ＿ /・ ヽ　　 ￣ヽ
　　　　∠ ＿ ゝ　 ｀^ヽ ﾉ.::::_(ノヽ
　　　　 _/ヽ　 　　  /ヽ￣￣/ヽ
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define dump(x)  cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl

#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define FOREACH(x,a) for(auto& (x) : (a) )

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define COUT(x) cout << (x) << endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int N, M;
vector<int> P, Q;

bool check(int index, int key) {
    if(Q[index] >= key) return true;
    else return false;
}

int binary_search(int key) {
    int ng = -1;
    int ok = Q.size() + 1;

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(check(mid, key)) ok = mid;
        else ng = mid;
    }
    return ng;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> M;
    P.assign(N + 1, 0);
    REP(i, 1, N + 1) cin >> P[i];
    sort(ALL(P));

    rep(i, N + 1) {
        REP(j, i + 1, N + 1) {
            Q.emplace_back(P[i] + P[j]);
        }
    }

    sort(ALL(Q));

    int ans = 0;
    rep(i, Q.size()) {
        if(M - Q[i] < 0) continue;
        ans = max(Q[i] + Q[binary_search(M - Q[i])], ans);
    }

    COUT(ans);
}

