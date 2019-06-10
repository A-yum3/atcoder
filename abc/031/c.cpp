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

    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = -1e8;
    for(int i = 0; i < n; i++) { // 高橋の位置
        int maxA = -1e8, maxT = -1e8;
        for(int j = 0; j < n; j++){ // 青木の位置
            if(i == j) continue;
            vector<int> v;

            // 2つの〇の配列を取り出す
            for(int k = min(i, j); k <= max(i, j); k++) {
                v.push_back(a[k]);
            }

            // 青木君と高橋くんの得点を求める
            int size = v.size(), sumA = 0, sumT = 0;
            for(int k = 0; k < size; k++) {
                if(k % 2 == 0) {
                    sumT += v[k];
                }
                else {
                    sumA += v[k];
                }
            }

            if(sumA > maxA) {
                maxA = sumA;
                maxT = sumT;
            }
        }
        ans = max(ans, maxT);
    }
    COUT(ans);
}