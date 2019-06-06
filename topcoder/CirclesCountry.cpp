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

class CirclesCountry {
    public: int leastBorders(vector<int> X, vector<int> Y, vector<int> R, int x1, int y1, int x2, int y2) {
        int num = 0;

        for(int i = 0; i < X.size(); i++) {
            if(inside(X[i], Y[i], x1, y1, R[i]) != inside(X[i], Y[i], x2, y2, R[i])) num++;
        }
        return num;
    }

    bool inside(int x1, int y1, int x2, int y2, int r) {
        return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) <= r * r;
    }
};