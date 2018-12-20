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
    string S[3]; cin >> S[0] >> S[1] >> S[2];
    int i = 0;
    while(1){
        if(S[i].size() == 0){
            cout << (char) ('A' + i) << endl;
            return 0;
        }
        int before_i = i;
        if(S[i][0] == 'b') i = 1;
        else if(S[i][0] == 'c') i = 2;
        else i = 0;
        S[before_i] = S[before_i].substr(1);
    }
}