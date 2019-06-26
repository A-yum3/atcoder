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
typedef pair<int, int> P;

int h, w;
char board[51][51];
int dist[51][51];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int sx = 0, sy = 0;

int bfs() {
    queue<P> que;
    rep(i, h) rep(j, w) dist[i][j] = -1;
    int gy = h - 1, gx = w - 1;
    que.push(P(sx, sy));
    dist[sx][sy] = 0;
    while(!que.empty()) {
        P p = que.front(); que.pop();
        if(p.first == gx && p.second == gy) break;

        rep(i, 4) {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if(0 <= ny && ny < h && 0 <= nx && nx < w && board[ny][nx] == '.' && dist[ny][nx] == -1) {
                dist[ny][nx] = dist[p.first][p.second] + 1;
                que.push(P(ny, nx));
            }
        }
    }
    return dist[gy][gx];
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    int cnt = 0;
    rep(i, h) rep(j, w) {
        cin >> board[i][j];
        if(board[i][j] == '.') cnt++;
    }

    int rel = bfs();
    if(rel == -1) cout << -1 << endl;
    else cout << cnt - rel - 1 << endl;
    return 0;
}
