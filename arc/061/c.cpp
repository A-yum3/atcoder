#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

// maskの位置に＋を入れて演算を行うbit探索、以下写経
// 引用：http://mmxsrup.hatenablog.com/entry/2016/09/12/213643

bool check(int mask, int point){
    if((mask & (1 << point)) != 0) return true;
    else return false;
}

int main(){
    string s; cin >> s;
    int n = s.size() - 1;

    ll sum = 0;
    for(int mask = 0; mask < (1 << n); ++mask){
        int l = 0; // left
        int r; // right
        ll tmp = 0;
        for(r = 0; r < n; ++r){
            if(check(mask, r)){
                string t = s.substr(l, r - l + 1);
                ll num = stoll(t);
                tmp += num;
                l = r + 1;
            }
        }
        string t = s.substr(l, r - l + 1);
        ll num = stoll(t);
        tmp += num;
        sum += tmp;
    }
    cout << sum << endl;
    return 0;
}