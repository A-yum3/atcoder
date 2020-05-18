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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> xy(n);
    set<pair<int, int>> judge;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        xy[i] = make_pair(x, y);
        judge.insert({x, y});
    }

    ll ans = 0;
    rep(i, n - 1) {
        REP(j, i + 1, n) {
            int x1, x2, y1, y2;
            x1 = xy[i].first;
            y1 = xy[i].second;
            x2 = xy[j].first;
            y2 = xy[j].second;

            ll s = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

            int x1_1 = (y2 - y1) * (-1) + x1;
            int y1_1 = (x2 - x1) + y1;
            int x1_2 = (y1 - y2) + x2;
            int y1_2 = (x1 - x2) * (-1) + y2;
            if(judge.find({x1_1, y1_1}) != judge.end() &&
               judge.find({x1_2, y1_2}) != judge.end())
                ans = max(ans, s);

            int x2_1 = (y2 - y1) + x1;
            int y2_1 = (x2 - x1) * (-1) + y1;
            int x2_2 = (y1 - y2) * (-1) + x2;
            int y2_2 = (x1 - x2) + y2;
            if(judge.find({x2_1, y2_1}) != judge.end() &&
               judge.find({x2_2, y2_2}) != judge.end())
                ans = max(ans, s);
        }
    }
    COUT(ans);
}
