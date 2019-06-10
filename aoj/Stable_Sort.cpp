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

struct Card {char suit, value;};

void BubbleSort(struct Card A[], int N) {
    rep(i, N) {
        for(int j = N - 1; j >= i; j--) {
            if(A[j].value < A[j - 1].value) {
                swap(A[j], A[j - 1]);
            }
        }
    }
}

void SelectionSort(struct Card A[], int N) {
    rep(i, N) {
        int minj = i;
        for(int j = i; j < N; j++) {
            if(A[j].value < A[minj].value) {
                minj = j;
            }
        }
        swap(A[i], A[minj]);
    }
}

void print(struct Card A[], int N) {
    rep(i, N) {
        if(i) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
    rep(i, N) {
        if(C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    Card C1[100], C2[100];
    rep(i, n) cin >> C1[i].suit >> C1[i].value;
    rep(i, n) C2[i] = C1[i];

    BubbleSort(C1, n);
    SelectionSort(C2, n);

    print(C1, n);
    cout << "Stable" << endl;
    print(C2, n);
    if(isStable(C1, C2, n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
}