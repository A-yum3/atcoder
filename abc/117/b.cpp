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
    int n; cin >> n;
    int maxi = 0;
    int sum = 0;
    rep(i,n){
        int l; cin >> l;
        maxi = max(maxi, l);
        sum += l;
    }
    if(maxi < sum - maxi){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}