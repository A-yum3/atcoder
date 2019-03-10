#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1<<29;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

bool compare_by_a(pair<ll, ll> a, pair<ll, ll> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    else {
        return a.first < b.first;
    }
}

int main(){
    int N, M; cin >> N >> M;
    vector<pair<ll, ll>> ab(N);
    rep(i, N) cin >> ab[i].first >> ab[i].second;
    sort(ALL(ab), compare_by_a);
    ll ans = 0;
    rep(i, N){
        rep(j, ab[i].second){
            ans += ab[i].first;
            M--;
            if(M == 0) break;
        }
        if(M == 0) break;
    }
    cout << ans << endl;
}