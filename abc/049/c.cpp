#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string s; cin >> s;
    reverse(ALL(s));
    rep(i, 4) reverse(ALL(divide[i]));
    bool can = true;
    for(int i = 0; i < s.size();){
        bool can2 = false;
        rep(j, 4){
            string d = divide[j];
            if(s.substr(i, d.size()) == d) {
                can2 = true;
                i += d.size();
            }
        }
        if(!can2) {
            can = false;
            break;
        }
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
}