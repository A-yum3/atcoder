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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<vector<int>> dist;
    vector<string> wall;

    int w, h;
    while(1) {
        cin >> w >> h;
        cin.ignore();
        if(w == 0 && h == 0) break;

        dist.assign(h, vector<int>(w, 0));
        wall.resize(h * 2 - 1);

        rep(i, h * 2 - 1) { getline(cin, wall[i]); }

        queue<pair<int, int>> que;
        dist[0][0] = 1;
        que.push({0, 0});

        while(!que.empty()) {
            pair<int, int> next = que.front();
            que.pop();
            int y = next.first, x = next.second;
            if(y == h - 1 && x == w - 1) break;
            rep(i, 4) {
                int ny = y + dy[i], nx = x + dx[i];
                if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
                if(dist[ny][nx] != 0) continue;
                if(wall[y + ny][x + nx] != '0') continue;
                dist[ny][nx] = dist[y][x] + 1;
                que.push({ny, nx});
            }
        }
        COUT(dist[h - 1][w - 1]);
    }
}
