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
    string s; cin >> s;
    int mixi = 1000;
    rep(i, s.length() - 2){
        string temp  = s.substr(i, 3);
        mixi = min(abs(753 - stoi(temp)), mixi);
    }
    cout << mixi << endl;
}