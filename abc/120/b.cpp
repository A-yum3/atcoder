#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)


int main(){
    int a, b, k; cin >> a >> b >> k;
    int i = min(a, b), cnt = 0;
    while(1){
        if(a % i == 0 && b % i == 0){
            cnt++;
        }
        if(cnt == k) break;
        i--;
    }
    cout << i << endl;
}