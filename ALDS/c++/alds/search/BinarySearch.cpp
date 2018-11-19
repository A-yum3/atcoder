#include <bits/stdc++.h>
using namespace std;

int A[1000000],n;

int search(int key){
    int left = 0;
    int right = n;
    int mid;
    while(left < right){
        mid = (left + right) / 2;
        if(A[mid] == key){
            return 1;
        } else if(key > A[mid]){
            left = mid+1;
        } else if(key < A[mid]){
            right = mid;
        }
    }
    return 0;
}

int main(){
    cin >> n;
    int sum=0;
    for(int i=0; i<n; i++) scanf("%d", &A[i]);
    int q; cin >> q;
    for(int i=0; i<q; i++){
        int key;
        scanf("%d", &key);
        if(search(key)) sum++;
    }
    cout << sum << endl;
}