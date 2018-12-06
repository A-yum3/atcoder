#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int a[6] = {};

int main(){
    string s; cin >> s;
    for(int i=0; i < s.length(); i++){
        if(s[i] =='A') a[0]++;
        else if(s[i] == 'B') a[1]++;
        else if(s[i] == 'C') a[2]++;
        else if(s[i] == 'D') a[3]++;
        else if(s[i] == 'E') a[4]++;
        else a[5]++;
    }
    for(int i=0; i < 6; i++){
        if(!i) cout << a[i];
        else cout << " " << a[i];
    }
    cout << endl;
}