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

// 後でバグを取る

vector<string> field(10);
vector<vector<bool>> visited;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};

void dfs(int y, int x) {
    visited[y][x] = true;

    rep(i, 4) {
        int ny = y + dy[i], nx = x + dx[i];
        if(ny < 0 || ny >= 10 || nx < 0 || nx >= 10 || field[ny][nx] == 'x')
            continue;
        if(visited[ny][nx]) continue;
        dfs(ny, nx);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    rep(i, 10) cin >> field[i];

    int cnt = 0;
    rep(i, 10) rep(j, 10) if(field[i][j] == 'o') cnt++;

    int flg = 0;

    rep(i, 10) rep(j, 10) {
        if(field[i][j] == 'x') {
            visited.assign(10, vector<bool>(10, false));
            dfs(i, j);
            int temp = 0;
            rep(i, 10) rep(j, 10) if(visited[i][j]) temp++;
            if(temp == cnt + 1) flg = 1;
        }
    }
    YES(flg);
}
