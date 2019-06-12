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

    stack<int> s1;
    stack<pair<int, int>> s2;
    char ch;
    int sum = 0;
    for(int i = 0; cin >> ch; i++) {
        if(ch == '\\') s1.push(i); // '\' ならばスタック位置情報iを積む
        else if(ch == '/' && s1.size() > 0) {
            int j = s1.top(); s1.pop();
            sum += i - j;
            int a = i - j;
            while(s2.size() > 0 && s2.top().first > j) {
                a += s2.top().second; s2.pop();
            }
            s2.push(make_pair(j, a));
        }
    }

    vector<int> ans;
    int t = 0;
    while(s2.size() > 0) {ans.push_back(s2.top().second); s2.pop(); }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for(int i = 0; i < ans.size(); i++) {
        cout << " ";
        t += ans[i];
        cout << ans[i];
    }
    cout << endl;

    return 0;
}