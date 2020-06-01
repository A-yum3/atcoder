/*
　　こんにちは。あたしはｶｳｶﾞｰﾙ。
　　redcoderになるためAtCoderを巡る旅をしてます。

　　　 　 ＿_
　　　 ヽ|＿_|ノ　　　　ﾓｫ
　　　　||‘‐‘||ﾚ　　_)_, ―‐ 、
　　　　/(Ｙ (ヽ＿ /・ ヽ　　 　￣ヽ
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

vector<vector<int>> field;
vector<vector<int>> seen;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int W, H;
    cin >> W >> H;
    field.assign(H + 2, vector<int>(W + 2, 0));
    seen.assign(H + 2, vector<int>(W + 2, 0));
    rep(i, H) rep(j, W) cin >> field[i + 1][j + 1]; // 1-indexed;

    queue<pair<int, int>> que; // y, x
    que.push({0, 0});
    seen[0][0] = true;

    int ey[6] = {-1, -1, 0, 1, 1, 0};
    int ex[6] = {-1, 0, 1, 0, -1, -1};
    int oy[6] = {-1, -1, 0, 1, 1, 0};
    int ox[6] = {0, 1, 1, 1, 0, -1};
    int ans   = 0;

    while(!que.empty()) {
        pair<int, int> next = que.front();
        que.pop();
        int y = next.first, x = next.second;

        rep(i, 6) {
            int ny, nx;
            if(y % 2) {
                ny = y + oy[i];
                nx = x + ox[i];
            } else {
                ny = y + ey[i];
                nx = x + ex[i];
            }
            if(ny < 0 || ny >= H + 2 || nx < 0 || nx >= W + 2) continue;
            if(seen[ny][nx]) continue;
            if(field[ny][nx]) {
                ans += 1;
            } else {
                seen[ny][nx] = 1;
                que.push({ny, nx});
            }
        }
    }

    COUT(ans);
}
