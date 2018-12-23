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
  int a = s[0]-'0', b = s[1]-'0', c = s[2]-'0', d = s[3]-'0';
  if(a-b-c-d==7) printf("%d-%d-%d-%d=7\n", a, b, c, d);
  else if(a-b-c+d==7) printf("%d-%d-%d+%d=7\n", a, b, c, d);
  else if(a-b+c-d==7) printf("%d-%d+%d-%d=7\n", a, b, c, d);
  else if(a-b+c+d==7) printf("%d-%d+%d+%d=7\n", a, b, c, d);
  else if(a+b-c-d==7) printf("%d+%d-%d-%d=7\n", a, b, c, d);
  else if(a+b-c+d==7) printf("%d+%d-%d+%d=7\n", a, b, c, d);
  else if(a+b+c-d==7) printf("%d+%d+%d-%d=7\n", a, b, c, d);
  else if(a+b+c+d==7) printf("%d+%d+%d+%d=7\n", a, b, c, d);
}