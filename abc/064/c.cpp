#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef map<int, int> mi;
typedef set<int> si;
#define VV(T) vector<vector< T > >
#define dump(x)  cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl

#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define FOREACH(x,a) for(auto& (x) : (a) )
#define SORT(x) sort(x.begin(), x.end())

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define pb push_back
#define pu push
#define mp make_pair
#define fi first
#define sc second

#define COUT(x) cout << (x) << endl
#define VECCIN(x) for(auto&youso_: (x) )cin>>youso_
#define VECCOUT(x) for(auto&youso_: (x) )cout<<youso_<<" ";cout<<endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    int flg = 0;
    int cnt = 0;
    rep(i, N) {
        int a; cin >> a;
        if      (a >= 3200) cnt++;
        else if (a >= 2800) flg |= (1<<0);
        else if (a >= 2400) flg |= (1<<1);
        else if (a >= 2000) flg |= (1<<2);
        else if (a >= 1600) flg |= (1<<3);
        else if (a >= 1200) flg |= (1<<4);
        else if (a >= 800)  flg |= (1<<5);
        else if (a >= 400)  flg |= (1<<6);
        else                flg |= (1<<7); 
    }
    int temp = 0;
    rep(i, 8) {
        if(flg & (1<<i)) temp++;
    }
    int m = temp;
    if(temp == 0) {
        m = 1;
    }
    cout << m << " " << temp + cnt << endl;
}