#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)


int main() {
	int n, a[100001], ans = 0, x;
	cin >> n;
	REP(i, 1, n + 1) {
		cin >> x;
		if (a[x] == i) ans++;
		a[i] = x;
	}
	cout << ans << endl;
}