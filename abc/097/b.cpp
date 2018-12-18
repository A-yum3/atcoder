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
    int x; cin >> x;
    vector<bool> expo(x+1);

    expo[1] = 1;
    for(int b = 2; b <= x; b++){
        int v = b * b;
        while(v <= x){
            expo[v] = 1;
            v *= b;
        }
    }
    for(int i=x; i>=1; i--) if(expo[i]){
        cout << i << endl;
        return 0;
    }
}