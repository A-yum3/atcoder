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
#define dump(x) cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE") << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible") << endl

#define rep(i, n) REP(i, 0, n)                  // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++) // x, x + 1, ..., n-1
#define FOREACH(x, a) for(auto &(x) : (a))

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define COUT(x) cout << (x) << endl

template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int n, q;
vector<int> S, T;

bool isOK(int index, int key) {
    if(S[index] >= key)
        return true;
    else
        return false;
}

int binary_search(int key) {
    int ng = -1;
    int ok = (int)S.size();

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if(isOK(mid, key))
            ok = mid;
        else
            ng = mid;
    }
    return ok;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    S.assign(n, 0);
    rep(i, n) cin >> S[i];
    cin >> q;
    T.assign(q, 0);
    rep(i, q) cin >> T[i];

    int ans = 0;
    rep(i, q) {
        int left = binary_search(T[i]);
        if(S[left] == T[i]) ans++;
    }
    COUT(ans);
}
