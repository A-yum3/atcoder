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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    vector<string> board(5);
    rep(i, 5) cin >> board[i];

    vector<string> zero = {"###", "#.#", "#.#", "#.#", "###"}, one = {".#.", "##.", ".#.", ".#.", "###"},
    two = {"###", "..#","###","#..","###"}, three = {"###","..#","###","..#","###"},
    four = {"#.#","#.#","###","..#","..#"}, five = {"###","#..","###","..#","###"},
    six = {"###","#..","###","#.#","###"}, seven = {"###","..#","..#","..#","..#"},
    eight = {"###","#.#","###","#.#","###"}, nine = {"###","#.#","###","..#","###"};

    vector<vector<string>> pattern = {eight, nine, six, five, three, zero, two, one, four, seven};
    vector<int> order = {8, 9, 6, 5, 3, 0, 2, 1, 4, 7};

    for(int col = 1; col <= 4*N-3; col += 4){
        rep(j, 10) {
            int flg = 1;
            rep(k, 5) {
                if(board[k].substr(col, 3) != pattern[j][k]) flg = 0;
            }
            if(flg){
                cout << order[j];
                break;
            }
        }
    }
    cout << endl;
}
