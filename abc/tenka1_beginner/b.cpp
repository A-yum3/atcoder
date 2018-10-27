#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

ll A,B,K;

int main(){
  cin >> A >> B >> K;
  rep(i , K) {
    if(i % 2 == 0){
      if(A % 2 != 0) A -= 1;
      B += A / 2; A -= A / 2;
    }
    else {
      if(B % 2 != 0) B -= 1;
      A += B / 2; B -= B / 2;
    }
  }
  cout << A << " " << B << endl;
}