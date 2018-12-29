#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)


int main(){
    string s, ts="CODEFESTIVAL2016"; cin >> s;
    int cnt=0;
    rep(i, s.length()){
        if(s[i] != ts[i]) cnt++;
    }
    cout << cnt << endl;
}