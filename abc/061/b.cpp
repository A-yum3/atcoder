#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;

    const int NMAX = 50;
    int A[NMAX], B[NMAX];

    for (int i=0; i < M; ++i) cin >> A[i] >> B[i];
    int road[NMAX];
    for (int i=0; i < N; ++i) {
        road[i] = 0;
    }
    for (int i=0; i < M; ++i){
        road[A[i] - 1] += 1;
        road[B[i] - 1] += 1;
    }
    for(int i = 0; i < N; ++i) cout << road[i] << endl;
}