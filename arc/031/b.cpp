#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

char board[10][10];
int cnt = 0;

int dfs(int a, int b) {
	if (a < 0 || 10 <= a || b < 0 || 10 <= b || board[a][b] == 'x') return 0;
	
	board[a][b] = 'x';
	return 1 + dfs(a + 1, b) + dfs(a - 1, b) + dfs(a, b + 1) + dfs(a, b - 1);
}

int main(){

	rep(i, 10) rep(j, 10) {
		cin >> board[i][j];
		if (board[i][j] == 'o') cnt++;
	}
	
	rep(i, 10) rep(j, 10) {
		char board2[10][10];
		rep(l, 10) rep(k, 10) board2[l][k] = board[l][k];
		board[i][j] = 'o';
		int count = dfs(i, j);
		rep(l, 10) rep(k, 10) board[l][k] = board2[l][k];
		if (count == cnt + 1) {
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	return 0;
}