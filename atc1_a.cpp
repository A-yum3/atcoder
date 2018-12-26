#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int h, w;
char s[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool f=0;

void dfs(int x, int y){

  if(s[x][y]=='#') return;
  if(s[x][y]=='g') f=1;
  s[x][y]='#';
  for(int i = 0; i < 4; ++i){
    if(x+dx[i]>=0&&x+dx[i]<h&&y+dy[i]>=0&&y+dy[i]<w) dfs(x+dx[i], y+dy[i]);
  }
}

int main(){
  cin >> h >> w;
  int mx, my;
  for(int i=0; i < h; ++i){
    for(int j=0; j < w; ++j){
      cin >> s[i][j];
      if(s[i][j]=='s') mx=j, my=i;
    }
  }
  dfs(mx, my);
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
}