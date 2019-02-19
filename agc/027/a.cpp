#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int a[110];

int main(){
    int N, x; cin >> N >> x;
    int sum = 0, ans = 0;
    rep(i, N){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+N);
    int k = 0;
    while(x >= a[k]){
        x = x - a[k];
        k++;
        if(k == N){
            if(x == 0) break;
            else { k--; break;}
        }
    }
    cout << k << endl;
}