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

struct Point { double x, y;};

void koch(int n, Point a, Point b){
    if(n == 0) return;
    Point s, t, u;
    double th = M_PI * 60.0 / 180.0;

    s.x = (2.0 * a.x + 1.0 * b.x) / 3.0;
    s.y = (2.0 * a.y + 1.0 * b.y) / 3.0;
    t.x = (1.0 * a.x + 2.0 * b.x) / 3.0;
    t.y = (1.0 * a.y + 2.0 * b.y) / 3.0;
    u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;

    koch(n - 1, a, s);
    printf("%.8f %.8f\n", s.x, s.y);
    koch(n - 1, s, u);
    printf("%.8f %.8f\n", u.x, u.y);
    koch(n - 1, u, t);
    printf("%.8f %.8f\n", t.x, t.y);
    koch(n - 1, t, b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    Point a, b;
    a.x = 0;
    a.y = 0;
    b.x = 100;
    b.y = 0;

    printf("%.8f %.8f\n", a.x, a.y);
    koch(n, a, b);
    printf("%.8f %.8f\n", b.x, b.y);

    return 0;
}