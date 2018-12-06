#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

string s;
vint ans;

int main(){
    cin >> s;
    int i;
    rep(i, s.length()){
        if(s[i] == '0') ans.push_back(0);
        if(s[i] == '1') ans.push_back(1);
        if(s[i] == 'B' && ans.size() > 0) ans.pop_back();
    }
    rep(i, ans.size()){
        cout << ans[i];
    }
    cout << endl;
}