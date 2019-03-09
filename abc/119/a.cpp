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
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    if(year < 2019) cout << "Heisei" << endl;
    else{
        if(month <= 4) cout << "Heisei" << endl;
        else{
            cout << "TBD" << endl;
        }
    }
}