// class化しよう

class UnionFind {
public:
    vector <ll> par; // 各元の親を表す配列
    vector <ll> siz; // 素集合のサイズを表す配列(1 で初期化)

    // Constructor
    UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    // 頂点数sz_だけ初期化をする
    void init(ll sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1LL);
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }

    // Member Function
    // Find
    // xの属する根の検索を行う
    ll root(ll x) { 
        while (par[x] != x) {
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }

    // Union(Unite, Merge)
    // xとyをくっ付ける。小さい方を大きい方にくっ付ける。
    bool merge(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        // merge technique（データ構造をマージするテク．小を大にくっつける）
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }
    // xとyが連結をしているか判定を行う。
    bool issame(ll x, ll y) { 
        return root(x) == root(y);
    }
    // 頂点xが属する素集合のサイズを求める。
    ll size(ll x) { // 素集合のサイズ
        return siz[root(x)];
    }
};

struct edge { int u, v, cost; };

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;       // 頂点数と変数

int kruskal() {
    sort(es, es + E, comp);     // edge.costが小さい順にソートする
    UnionFind uf(V);          // Union-Find初期化
    int res = 0;
    for (int i = 0; i < E; i++) {
        edge e = es[i];
        if (!uf.issame(e.u, e.v)) {
            uf.merge(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}