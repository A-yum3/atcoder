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
	int n, a, b; cin >> n >> a >> b;
	int one = 0, two = 0, three = 0;
	rep(i, n) {
		int p; cin >> p;
		if (p <= a) one++;
		else if (a + 1 <= p && p <= b) two++;
		else three++;
	}
	cout << min(one, min(two, three)) << endl;
}