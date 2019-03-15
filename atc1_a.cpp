#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<vector<ll>> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
#define VV(T) vector<vector< T > >
#define brep(i, n) BREP(i, 0, m);
#define BREP(i, x, n) for(int i = x; i < (1<<n); i++)
#define rep(i, n) REP(i, 0, n)
#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define PB push_back
#define MOD 1000000009LL

char c[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int H, W, f = 0;

void dfs(int x, int y){
	if(c[x][y] == '#') return;
	if(c[x][y] == 'g') f = 1;

	c[x][y] = '#';

	rep(i, 4){
		if(x + dx[i] >= 0
		&& x + dx[i] < H
		&& y + dy[i] >= 0
		&& y + dy[i] < W){
			dfs(x + dx[i], y + dy[i]);
		}
	}
}

int main(){
	cin >> H >> W;
	rep(i, H) rep(j, W) cin >> c[i][j];
	rep(i, H) rep(j, W){
		if(c[i][j] == 's'){
			dfs(i, j);
		}
	}
	if(f == 1)  cout << "Yes" << endl;
	else cout << "No" << endl;
}