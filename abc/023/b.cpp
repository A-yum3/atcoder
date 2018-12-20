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
    int n,i; string S; cin >> n >> S;
    string s = "b";
    for(i=0; s.size() < S.size(); ++i){
        if(i % 3 == 0) s = "a" + s + "c";
        else if(i % 3 == 1) s = "c" + s + "a";
        else s = "b" + s + "b";
    }
    if(s == S) cout << i << endl;
    else cout << -1 << endl;
}