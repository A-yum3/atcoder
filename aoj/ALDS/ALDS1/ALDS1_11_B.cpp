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

using Graph = vector<vector<int>>;
vector<bool> seen;
vector<int> first_order;
vector<int> second_order;

void dfs(const Graph &G, int v, int &ptr) {
    first_order[v] = ptr++;
    seen[v]        = true;

    for(const auto &next_v : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v, ptr);
    }

    second_order[v] = ptr++;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    Graph G(n + 1); // 1-indexed
    rep(i, n) {
        int v, k;
        cin >> v >> k;
        rep(i, k) {
            int to_v;
            cin >> to_v;
            G[v].push_back(to_v);
        }
    }
    // 頂点1スタート
    seen.assign(n + 1, false);
    first_order.resize(n + 1);
    second_order.resize(n + 1);
    int ptr = 1;
    REP(i, 1, n + 1) {
        if(!seen[i]) dfs(G, i, ptr);
    }

    REP(i, 1, n + 1) {
        cout << i << " " << first_order[i] << " " << second_order[i] << endl;
    }
}
