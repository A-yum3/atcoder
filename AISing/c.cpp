#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

char board[401][401];

int dx[] = { 0,1 };
int dy[] = { -1,0 };
int h, w;
int cnt = 0;

int dfs(int x, int y, char c, int count) {

	int sum = 0;
	rep(i, 2) {
		int a = x + dx[i]; int b = y + dy[i];
		if (0 <= a && a < w && 0 <= b && b < h && board[a][b] != c) {
			if (board[a][b] == '.') sum += 2;
			dfs(a, b, board[a][b], count);
		}
	}
	
	return sum;
	
}

int main() {
cin >> h >> w;
	int ans = 0;
	rep(i, h) rep(j, w) {
		cin >> board[i][j];
	}
	rep(i, h) rep(j, w) {
		ans += dfs(i, j, board[i][j], 0);
	}
	cout << ans << endl;
}