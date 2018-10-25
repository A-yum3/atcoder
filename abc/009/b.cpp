#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int A[100];
    for(int i=0; i < N; i++) cin >> A[i];
    sort(A, A+N, greater<int>());
    int max = A[0];
    for(int i=1; i < N; i++){
        if(max != A[i]){
            cout << A[i] << endl;
            break;
        }
    }
}