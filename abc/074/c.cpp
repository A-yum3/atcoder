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
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    int anso = 0, anst = 0;
    for(int i = 0; i <= f; i += 100 * a){
        for(int j = 0; i + j <= f; j += 100 * b){
            for(int k = 0; (i + j) / 100 * e >= k; k += c){
                for(int l = 0; (i + j) / 100 * e >= k + l && i + j + k + l <= f; l += d){
                    if(anso == 0) anso = k + l, anst = i + j + k + l;
                    else if((double) anso / anst < (double)(k + l) / (i + j + k + l)) anso = k + l, anst = i + j + k + l;
                }
            }
        }
    }
    cout << anst << " " << anso << endl;
}