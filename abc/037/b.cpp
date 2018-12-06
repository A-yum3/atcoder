#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int N, Q, i;
int a[100] = {0};

int main(){
    cin >> N >> Q;
    rep(i, Q){
        int L,R,T;
        cin >> L >> R >> T;
        for(int j = L - 1; j < R; j++){
            a[j] = T;
        }
    }
    rep(i, N){
        cout << a[i] << endl;
    }
}