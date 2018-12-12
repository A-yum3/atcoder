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
  int N, M, i, j; cin >> N >> M;
  pint zahyo[N];
  rep(i, N) cin >> zahyo[i].first >> zahyo[i].second;
  rep(i, N){
    int minj = 1;
    int mini = 10000000000;
    rep(j, M){
      int x, y; cin >> x >> y;
      int temp = abs(zahyo[i].first - x) + abs(zahyo[i].second - y);
      if(mini >= temp){
        mini = temp;
        minj = j+1;
      }
    }
    cout << minj << endl;
  }
}