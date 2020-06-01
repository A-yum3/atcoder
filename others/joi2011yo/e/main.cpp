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

const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

int sy, sx;
int H, W, N;

vector<string> field;
vector<vector<int>> dist;

int bfs(int point) {
    queue<pair<int, int>> que; // y, x
    dist.assign(H, vector<int>(W, -1));
    dist[sy][sx] = 0;
    que.push({sy, sx});

    while(!que.empty()) {
        pair<int, int> next = que.front();
        que.pop();

        rep(i, 4) {
            int ny = next.first + dy[i], nx = next.second + dx[i];
            if(ny < 0 || ny >= H || nx < 0 || nx >= W || dist[ny][nx] != -1 ||
               field[ny][nx] == 'X')
                continue;

            dist[ny][nx] = dist[next.first][next.second] + 1;
            if(field[ny][nx] == point + '0') {
                sy = ny, sx = nx;
                return dist[ny][nx];
            }
            que.push({ny, nx});
        }
    }
    return 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> H >> W >> N;
    field.resize(H);
    rep(i, H) cin >> field[i];

    rep(i, H) rep(j, W) {
        if(field[i][j] == 'S') {
            sy = i;
            sx = j;
        }
    }

    int ans = 0;

    REP(point, 1, N + 1) { ans += bfs(point); }

    COUT(ans);
}
