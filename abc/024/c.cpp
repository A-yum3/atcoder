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

    int n, d, k; cin >> n >> d >> k;
    vector<pair<int, int>> lr(d);
    rep(i, d) cin >> lr[i].first >> lr[i].second;
    rep(i, k) {
        int start, goal; cin >> start >> goal;
        int back = 0;
        if(goal < start) back = 1;
        rep(j, d) {
            if(lr[j].first <= start && start <= lr[j].second){
                if(back) start = lr[j].first;
                else start = lr[j].second;

                if(lr[j].first <= goal && goal <= lr[j].second){
                    cout << j + 1 << endl;
                    break;
                }
            }
        }
    }
}