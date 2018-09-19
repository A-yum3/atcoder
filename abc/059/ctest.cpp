#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll s1, s2, c1, c2;
int main() {
	ll n, a;
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a);
		s1 += a;
		s2 += a;
		if (i % 2) {
			if (s1 <= 0) c1 += 1 - s1,s1 = 1;
			if (s2 >= 0) c2 += 1 + s2,s2 = -1;
		}
		else {
			if (s1 >= 0) c1 += 1 + s1,s1 = -1;
			if (s2 <= 0) c2 += 1 - s2,s2 = 1;
		}
	}
	cout << min(c1, c2) << endl;
	return 0;
}