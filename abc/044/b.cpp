#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

string w;
int i;
char a[102];
int c[31] = {0};

int main(){
    cin >> w;
    rep(i, w.length()){
        c[w[i] - 'a']++;
    }
    bool flg = true;
    rep(i, 31){
        if(c[i] % 2 != 0) flg = false;
    }
    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
}