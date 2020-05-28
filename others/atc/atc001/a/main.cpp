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

int H, W;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<string> field;
vector<vector<bool>> seen(500, vector<bool>(500, false));

void dfs(int h, int w) {
    seen[h][w] = true;

    rep(i, 4) {
        int nh = h + dx[i];
        int nw = w + dy[i];

        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if(field[nh][nw] == '#') continue;

        if(seen[nh][nw]) continue;

        dfs(nh, nw);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> H >> W;
    field.resize(H);
    rep(i, H) cin >> field[i];

    int sw, sh, gw, gh;
    rep(i, H) {
        rep(j, W) {
            if(field[i][j] == 's') sh = i, sw = j;
            if(field[i][j] == 'g') gh = i, gw = j;
        }
    }

    dfs(sh, sw);

    if(seen[gh][gw])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
