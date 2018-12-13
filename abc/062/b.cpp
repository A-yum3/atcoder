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
    int h,w; cin >> h >> w;
    string a[h];
    rep(i, h) cin >> a[i];
    int l=0;
    rep(i, h+2){
        int k=0;
        rep(j, w+2){
            if(i == 0 || i == h+1){
                cout << '#';
            } else {
                if(j == 0 || j == w+1) cout << '#';
                else{
                    cout << a[l][k];
                    k++;
                }
            }
        }
        if(i != 0 && i != h + 1) l++;
        cout << endl;
    }
}