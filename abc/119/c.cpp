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

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define COUT(x) cout << (x) << endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int n, a, b, c, ans = 1e9;
vector<int> l;

void dfs(int depth, int alen, int blen, int clen, int mp) {
    if(depth > n) {
        // 目標の竹は1以上が確約されているのでずっとAだけ～のようなパターンを排斥
        if(alen && blen && clen) ans = min(ans, abs(a - alen) + abs(b - blen) + abs(c - clen) + mp);
        return ;
    }
    dfs(depth + 1, alen, blen, clen, mp); // この竹を使用しない
    dfs(depth + 1, alen + l[depth], blen, clen, mp + 10 * (alen > 0)); // aを作るのに使用 (alen > 0) は一本目を選ぶときの状態を除くため
    dfs(depth + 1, alen, blen + l[depth], clen, mp + 10 * (blen > 0)); // bを作るのに使用
    dfs(depth + 1, alen, blen, clen + l[depth], mp + 10 * (clen > 0)); // cを作るのに使用
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> a >> b >> c;
    l.resize(n + 1);
    rep(i, n) cin >> l[i + 1];
    dfs(1, 0, 0, 0, 0);
    cout << ans << endl;
}
