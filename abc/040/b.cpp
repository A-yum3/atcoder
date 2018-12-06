#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int n,s = 100000;

int main(){
    cin >> n;
    for(int i=1; i < n/i + 1; i++) s = min(s, n/i - i + n % i);
    cout << s << endl;
}