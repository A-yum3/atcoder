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
	string s; cin >> s;
	int cnt = 0;
	int cntc = 0;
	rep(i, s.length()) {
		if (s[i] == 'a') {
			if (cnt <= a + b) {
				cout << "Yes" << endl;
				cnt++;
				continue;
			}
		}
		else if (s[i] == 'b') {
			if (cnt <= a + b && cntc <= b) {
				cout << "Yes" << endl;
				cnt++;
				cntc++;
				continue;
			}
		}
		cout << "No" << endl;
	}
}