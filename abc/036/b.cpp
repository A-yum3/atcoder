#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int N,i;
string board[50];

int main(){
    cin >> N;
    rep(i, N){
        cin >> board[i];
    }
    rep(i, N){
        for(int j = N - 1; 0 <= j; j--){
            cout << board[j][i];
        }
        cout << endl;
    }
}