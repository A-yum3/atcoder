#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int H1, H2, W1, W2;

int main(){
    cin >> H1 >> W1 >> H2 >> W2;
    bool flg = false;
    if(H1 == H2
    || H1 == W2
    || W1 == H2
    || W1 == W2) flg = true;
    if(flg) cout << "YES" << endl;
    else cout << "NO" << endl;
}