#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

string s[12];

int main(){
    int count = 0;
    rep(i, 12){
        cin >> s[i];
        if(s[i].find("r") != string::npos) count++;
    }
    cout << count << endl;
}