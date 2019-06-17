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

    int h, w; cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    vector<vector<int>> cnt(h, vector<int>(w));

    rep(i, h) {
        vector<int> done(w);
        rep(j, w) {
            if(s[i][j] == '#') continue;
            if(done[j]) continue;
            int l = 0;
            while(j + l < w) {
                if(s[i][j + l] == '#') break;
                l++;
            }
            rep(k, l) {
                cnt[i][j + k] += l;
                done[j + k] = 1;
            }
        }
    }
    rep(j, w) {
        vector<int> done(h);
        rep(i, h) {
            if(s[i][j] == '#') continue;
            if(done[i]) continue;
            int l = 0;
            while(i + l < h) {
                if(s[i + l][j] == '#') break;
                l++;
            }
            rep(k, l) {
                cnt[i + k][j] += l;
                done[i + k] = 1;
            }
        }
    }
    int ans = 0;
    rep(i, h) rep(j, w) ans = max(ans, cnt[i][j] - 1);
    cout << ans << endl;
    return 0;
}
