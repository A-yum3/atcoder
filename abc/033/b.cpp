#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int sum = 0, maxi = 0;
string maxcity;
int N,i;

int main(){
    cin >> N;
    rep(i, N){
        string s;
        int p; cin >> s >> p;
        sum += p;
        if(maxi < p){
            maxi = p;
            maxcity = s;
        }
    }
    if(sum / 2 < maxi){
        cout << maxcity << endl;
    }else{
        cout << "atcoder" << endl;
    }
}