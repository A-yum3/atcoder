#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int A[MAX], n;

int partition(int p, int r){ // pは区間の左、rは区間の右
    int x,i,j,t;
    x = A[r]; // 最右をxに入れる
    i = p - 1;
    for( j = p; j < r; j++){
        if( A[j] <= x){ // A[j]がx以下の時に左側のパーティションを広げる
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

int main(){
    int i,q;
    scanf("%d", &n);
    for( i = 0; i < n; i++) scanf("%d", &A[i]);

    q = partition(0, n - 1);

    for(i = 0; i < n; i++){
        if(i) printf(" ");
        if( i==q ) printf("[");
        printf("%d", A[i]);
        if( i == q) printf("]");
    }
    printf("\n");

    return 0;
}