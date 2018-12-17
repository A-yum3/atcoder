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
    ll L[87];
    L[0]=2LL, L[1]=1LL;
    REP(i, 2, n+1) L[i]=L[i-2]+L[i-1];
    cout << L[n];
}