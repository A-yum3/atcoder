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

vector<int> order(8); // Queenの位置 順列
vector<vector<int>> board(8, vector<int>(8, 0));

bool isCheck() {
    rep(i, 8) { board[i][order[i]] = 1; }

    rep(i, 8) {
        rep(j, 8) {
            // 右ななめ下
            if(!board[i][j]) continue;
            int y   = i;
            int x   = j;
            int cnt = 0;
            while(y < 8 && x < 8) {
                cnt += board[y][x];
                y++;
                x++;
            }
            if(cnt > 1) return false;

            // 左ななめ下
            cnt = 0;
            y   = i;
            x   = j;
            while(y < 8 && x >= 0) {
                cnt += board[y][x];
                y++;
                x--;
            }
            if(cnt > 1) return false;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    // 入力
    int k;
    cin >> k;
    vector<pair<int, int>> rc(k);

    rep(i, k) { cin >> rc[i].first >> rc[i].second; }

    rep(i, 8) order[i] = i;

    do {
        // 与えられたQの位置が異なる順列であるのならばスキップ
        bool flg = false;
        rep(i, k) {
            if(order[rc[i].first] != rc[i].second) {
                flg = true;
                break;
            }
        }
        if(flg) continue;

        if(isCheck())
            break;
        else
            board.assign(8, vector<int>(8, 0));
    } while(next_permutation(ALL(order)));

    // 出力
    rep(i, 8) {
        rep(j, 8) {
            if(board[i][j])
                cout << "Q";
            else
                cout << ".";
        }
        cout << endl;
    }
}
