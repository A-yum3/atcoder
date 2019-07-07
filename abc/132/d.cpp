/*
　　こんにちは。あたしはｶｳｶﾞｰﾙ。
　　redcoderになるためAtCoderを巡る旅をしてます。

　　　 　 ＿_
　　　 ヽ|＿_|ノ　　　　ﾓｫ
　　　　||‘‐‘||ﾚ　　_)_, ―‐ 、
　　　　/(Ｙ (ヽ＿ /・ ヽ　　 ￣ヽ
　　　　∠ ＿ ゝ　 ｀^ヽ ﾉ.::::_(ノヽ
　　　　 _/ヽ　 　　  /ヽ￣￣/ヽ
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define dump(x)  cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl

#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define FOREACH(x,a) for(auto& (x) : (a) )

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define COUT(x) cout << (x) << endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int MOD = 1000000007;

int exp_mod(long long a, long long b, int m) {
	long long res = 1;
	while (b > 0) {
		if (b&1)
			res = (res * a)%m;
		a = (a * a)%m;
		b >>= 1;
	}
	return (int)res;
}

int fact_mod(int n, int m) {
	long long res = 1;
	for (int i=n; i>0; --i)
		res = (res * i)%m;
	return (int)res;
}

int comb_mod(int n, int r) {
	long long res = 1;
	for (int i=0; i<r; ++i)
		res = (res * (n - i) )%MOD;
	return ( res * exp_mod(fact_mod(r, MOD), MOD-2, MOD) ) % MOD;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k; cin >> n >> k;
    for(int i = 1; i <= k; i++) {
        cout << comb_mod(n-k+1, i)*comb_mod(k-1,i-1) << endl;
    }
}
