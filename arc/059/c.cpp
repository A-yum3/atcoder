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
    float sum = 0;
    int a[110];
    rep(i, n){
        cin >> a[i];
        sum += a[i];
    }
    int temp = round(sum / n);
    int rel = 0;
    rep(i, n){
        rel += pow((a[i] - temp),2.0);
    }
    cout << rel << endl;
}