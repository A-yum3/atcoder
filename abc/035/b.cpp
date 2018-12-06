#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

string S;
int T, i, x=0, y=0,cnt=0;
int main(){
    cin >> S >> T;
    rep(i, S.length()){
        if(S[i] == 'U') y++;
        if(S[i] == 'L') x--;
        if(S[i] == 'D') y--;
        if(S[i] == 'R') x++;
        if(S[i] == '?') cnt++;
    }
    if(T==1) cout << abs(x) + abs(y) + cnt << endl;
    else cout << max(abs(x) + abs(y) - cnt, (int)S.length()%2) << endl;
}