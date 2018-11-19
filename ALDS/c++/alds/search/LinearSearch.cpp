#include <bits/stdc++.h>
using namespace std;

int search(int A[], int n, int key){
    int i=0;
    A[n] = key;
    while(A[i] != key) i++;
    return i != n;
}

int main(){
    int i, n, A[10000+1], q, key, sum = 0;
    cin >> n;
    for(i=0; i<n; i++) scanf("%d", &A[i]);
    cin >> q;
    for(i=0; i<q; i++){
        scanf("%d", &key);
        if(search(A,n,key)) sum++;
    }
    cout << sum << endl;
}