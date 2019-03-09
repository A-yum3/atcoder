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


int main(){
    string s; cin >> s;
    int i = 0;
    int onec = 0, zeroc = 0;
    rep(i, s.size()){
        if(s[i] == '1'){
            onec++;
        } else {
            zeroc++;
        }
    }
    cout << min(onec, zeroc) * 2 << endl;
}