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

    string s; cin >> s;
    int ans = 110;
    int f = 1;
    // 全て同一文字の場合は0を出力
    for(int i = 1; i < s.size(); i++) if(s[0] != s[i]) f = 0;
    if(f) {
        cout << 0 << endl;
        return 0;
    }

    // 決めた文字がi, i+1 にない場合はそのまま、存在したらそれをiに入れる
    for(char c = 'a'; c <= 'z'; c++) { // a~zまで全探索
        string s1 = s;
        int flg = true;
        int cnt = 0;
        while(flg) {
            flg = false;
            for(int i = 0; i < s.size() - cnt - 1; i++) {
                if(s1[i] == c || s1[i + 1] == c) s1[i] = c;
                else flg = true; // この時点で全て同じ文字じゃないと判断できる
            }
            cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}
