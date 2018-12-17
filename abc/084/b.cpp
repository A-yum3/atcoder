#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int a, b; string s;

int main(){
    cin >> a >> b >> s;
    int cnt = 0;
    for(auto x : s) if(x == '-') ++cnt;
    if(s[a] == '-' && cnt==1) puts("Yes");
    else puts("No");
}