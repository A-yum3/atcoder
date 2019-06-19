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
vector<int> color;

struct Edge
{
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) { }
};

void dfs(const vector<vector<Edge>> &G, int v, int cur, int p) {
    color[v] = cur;
    for(auto next_edge : G[v]) {
        if(next_edge.to == p) continue;
        if(next_edge.weight % 2 == 0) dfs(G, next_edge.to, cur, v);
        else dfs(G, next_edge.to, 1 - cur, v);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<vector<Edge>> G(n);

    for(int i = 0; i < n - 1; i++) {
        int u, v, w; cin >> u >> v >> w;
        u--; v--;
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }

    color.assign(n, -1); //色分け配列初期化
    dfs(G, 0, 1, -1);

    rep(i, n) {
        cout << color[i] << endl;
    }
}
