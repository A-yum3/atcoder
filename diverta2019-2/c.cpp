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


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> ans;
    rep(i, n) cin >> a[i];

    for(int i = n; i > 1; i--) {
        int j = i - 1;
        int mixi = 1e5;
        int minidx = 0;
        int maxidx = 0;
        int maxi = -1e5;
        while(j > 0) {
            if(mixi > a[j]){
                mixi = a[j];
                minidx = j;
            }
            if(maxi < a[j]) {
                maxi = a[j];
                maxidx = j;
            }
            j--;
        }
        cout << maxi << " " << mixi;
        ans.push_back(make_pair(maxi, mixi));
        a.erase(a.begin() + maxidx);
        a.erase(a.begin() + minidx);
        if(i % 2) {
            a.push_back(mixi - maxi);
        } else {
            a.push_back(maxi - mixi);
        }
    }
    rep(i, ans.size()) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    cout << a[0] << endl;
    return 0;
}
