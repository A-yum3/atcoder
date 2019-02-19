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
    if(n % 10 == 0){
        cout << 10 << endl;
        return 0;
    }
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}