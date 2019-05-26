#include <bits/stdc++.h>
using namespace std;
// TODO: 当然のごとく整備後クラス化
typedef pair<int, int> P; // firstは最短距離、secondは頂点番号


struct edge{ int to, cost; };

int V;
vector<edge> G[MAX_V]; //グラフ
int d[MAX_V]; // 頂点Sからの最短距離
int prev[MAX_V];

void dijkstra(int s) {
    // greater<P>指定により小さいものから取り出している
    priority_queue<P, vector<P>, greater<P> > que;
    fill(prev, prev + V, -1);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                prev[e.to] = v;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

vector<int> get_path(int t) {
    vector<int> path;
    for (; t != -1; t = prev[t]) path.push_back(t); // tがsになるまでprev[t]を辿る
    // このままだとt->sの順なので逆順にする
    reverse(path.begin(), path.end());
    return path;
}

