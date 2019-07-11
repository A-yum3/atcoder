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

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int h, w;

int search(vector<vector<int>> &G, int y, int x) {
    int cnt = 0;
    rep(i, 4) {
        int ny = y + dx[i], nx = x + dy[i];
        if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
        if(G[ny][nx] == 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    int ans = 0;
    vector<vector<int>> board(h, vector<int>(w, 0));
    rep(i, h) rep(j, w) {
        ans += search(board, i, j);
        board[i][j] = 1;
    }
    cout << ans << endl;
}
