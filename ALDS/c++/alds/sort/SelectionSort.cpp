#include <bits/stdc++.h>
using namespace std;

int selectionSort(int A[], int N){
    int cnt=0;
    for(int i=0; i < N; i++){
        int minj = i;
        for(int j = i+1; j < N; j++){
            if(A[minj] > A[j]){
                minj = j;
            }
        }
        if(i != minj){swap(A[i], A[minj]); cnt++;}
    }
    return cnt;
}

int main(){
    int N,A[100]; cin >> N;
    for(int i=0; i<N; i++) cin >> A[i];
    int cnt = selectionSort(A,N);
    for(int i=0; i<N; i++){
        if(i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
}