#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

ll A, B, C;

int main(){
    cin >> A >> B >> C;
    cout << C * ((A*B) % 1000000007)%1000000007 << endl;

}