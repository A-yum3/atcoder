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
    long double sum = 0;
    rep(i, n){
        long double x; cin >> x;
        string u; cin >> u;
        if(u == "JPY") sum += x;
        else sum += x * 380000.0;
    }
    cout << sum << endl;
}