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
    string a,b; cin >> a >> b;
    auto s = stoi(a + b);
    long x = sqrt(s);
    if(x * x == s) cout << "Yes" << endl;
    else cout << "No" << endl;
}