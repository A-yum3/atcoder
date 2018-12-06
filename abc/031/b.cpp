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
    int L,H,N; cin >> L >> H >> N;
    int i;
    rep(i, N){
        int a; cin >> a;
        if(L <= a && H >= a){
            cout << 0 << endl;
        } else if(H < a){
            cout << -1 << endl;
        } else {
            cout << L - a << endl;
        }
    }
}