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
    int n; cin >> n;
    string s; cin >> s;
    int rel = 0;
    REP(i, 1, n){
        int cnt=0;
        for(char c = 'a'; c <= 'z'; c++){
            bool left = false, right = false;
            for(int j = 0; j < i; j++){
                if(s[j] == c) left = true;
            }

            for(int j = i; j < n; j++){
                if(s[j] == c) right = true;
            }

            if(left&&right) cnt++;
        }
        rel = max(rel, cnt);
    }
    cout << rel << endl;
}
