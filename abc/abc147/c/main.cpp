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

int n;
vector<vector<pair<int, int>>> axy;

bool judge(int bit) {
    rep(i, n) {
        if(!(bit & (1 << i))) continue;

        for(pair<int, int> xy : axy[i]) {
            int x = xy.first;
            int y = xy.second;

            if(y == 1 && !(bit & (1 << x))) return false;

            if(y == 0 && (bit & (1 << x))) return false;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    axy.resize(n);
    rep(i, n) {
        int a;
        cin >> a;
        axy[i].resize(a);
        rep(j, a) {
            cin >> axy[i][j].first >> axy[i][j].second;
            --axy[i][j].first;
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1 << n); bit++) {

        if(judge(bit)) {
            int count = 0;
            for(int i = 0; i < n; i++) {
                if(bit & (1 << i)) count++;
            }
            ans = max(ans, count);
        }
    }
    COUT(ans);
}
