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


class UnionFind {
    public:
        vector<int> Parent;

        UnionFind(int N){
            Parent = vector<int>(N, -1);
        }

        int root(int A){
            if(Parent[A] < 0) return A;
            return Parent[A] = root(Parent[A]);
        }

        int size(int A) {
            return -Parent[root(A)];
        }

        bool connect(int A, int B){
            A = root(A);
            B = root(B);
            if(A == B){
                return false;
            }

            if(size(A) < size(B)) swap(A, B);

            Parent[A] += Parent[B];
            Parent[B] = A;
            return true;
        }
};


int main(){
    int N, M; cin >> N >> M;
    vector<int> A(M), B(M);
    rep(i, M){
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    vector<ll> ans(M);
    ans[M - 1] = (ll)N * (N - 1) / 2;

    UnionFind Uni(N);

    for(int i = M - 1; i >= 1; i--){

        ans[i - 1] = ans[i];

        if(Uni.root(A[i]) != Uni.root(B[i])) {
            ans[i - 1] -= (ll) Uni.size(A[i]  * Uni.size(B[i]));
            Uni.connect(A[i], B[i]);
        }
    }

    rep(i, M) cout << ans[i] << endl;
}