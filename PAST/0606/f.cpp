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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    vector<set<char>> a(N);
    vector<string> aa(N);

    rep(i, N) {
        string s; cin >> s;
        aa[i] = s;
        rep(j, N) {
            a[i].insert(s[j]);
        }
    }

    vector<vector<char>> intersection(N);

    rep(i, N / 2) {
        set_intersection(ALL(a[i]), ALL(a[N - i - 1]), inserter(intersection[i], intersection[i].end()));
    }

    vector<char> ans(N, '0');

    rep(i, N / 2) {
        for(auto e : intersection[i]) {
            ans[i] = ans[N - i - 1] = e;
        }
    }

    if(N & 1) ans[N / 2] = aa[N / 2][0];

    for(auto c : ans) {
        if(c == '0'){
            COUT(-1);
            return 0;
        }
        cout << c;
    }
    cout << endl;

}
