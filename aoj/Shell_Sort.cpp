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

vector<int> G;
ll cnt;
int A[1000000];

void insertionSort(int A[], int n, int g) {
    for(int i = g; i < n; i++) {
        int v = A[i];
        int j = i - g;
        while(j >= 0 && A[j] > v) {
            A[j + g] = A[j];
            j = j - g;
            cnt++;
        }
        A[j + g] = v;
    }
}

void shellSort(int A[], int n) {
    for(int h = 1; ;) {
        if(h > n) break;
        G.push_back(h);
        h = 3 * h + 1;
    }

    for(int i = G.size() - 1; i >= 0; i--) {
        insertionSort(A, n, G[i]);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    rep(i, n) cin >> A[i];

    shellSort(A, n);

    cout << G.size() << endl;
    for(int i = G.size() - 1; i >= 0; i--) {
        cout << G[i];
        if(i) cout << " ";
    }
    cout << endl;
    cout << cnt << endl;
    rep(i, n) cout << A[i] << endl;
}