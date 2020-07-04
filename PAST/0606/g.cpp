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

const int dy[6] = {1, 1, 0, -1, 0, 1};
const int dx[6] = {0, 1, 1, 0, -1, -1};


// ずらしたときの範囲に気をつけないと死ぬ
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, gx, gy; cin >> N >> gx >> gy;
    gx += 201; gy += 201;
    vector<vector<int>> board(403, vector<int>(403, 0));
    int sy, sx; sy = sx = 201;
    rep(i, N) {
        int x, y; cin >> x >> y;
        board[201+y][201+x] = 1;
    }

    vector<vector<int>> dist(403, vector<int>(403, -1));
    queue<pair<int,int>> que;

    dist[sy][sx] = 0;
    que.push({sy, sx});

    while(!que.empty()) {
        pair<int,int> next = que.front(); que.pop();
        int y = next.first, x = next.second;
        rep(i, 6) {
            int ny = y + dy[i], nx = x + dx[i];
            if(ny < 0 || ny >= 403 || nx < 0 || nx >= 403 || board[ny][nx] == 1) continue;
            if(dist[ny][nx] == -1) {
                dist[ny][nx] = dist[y][x] + 1;
                que.push({ny, nx});
            }
        }
    }
    cout << dist[gy][gx] << endl;
}
