#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

ll a[100000], b[100000];

int main(){
    int n; cin >> n;
    ll tsum = 0, asum = 0;
    rep(i, n){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i < n; i++){
        ll temp = 0;
        int idx=0;
        if(i % 2){
            rep(j, n){
                if(a[j] == 0 && b[j] == 0) continue;
                if(b[j] - a[j] > temp){
                    temp = b[j] - a[j];
                    idx = j;
                } else if(b[j] - a[j] == temp){
                    if(b[idx] < b[j]){
                        idx = j;
                    }
                }
            }
            asum += b[idx];
        } else {
            rep(j, n){
                if(a[j] == 0 && b[j] == 0) continue;
                if(b[j] - a[j] > temp){
                    temp = b[j] - a[j];
                    idx = j;
                } else if(b[j] - a[j] == temp){
                    if(a[idx] < a[j]){
                        idx = j;
                    }
                }
            }
            tsum += a[idx];
        }
        a[idx] = 0, b[idx] = 0;
    }
    cout << tsum - asum << endl;
}