#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[100010];
    for(int i=0; i < n; i++){
        scanf("%d", &a[i]);
        a[i]--;
    }
    int x=0;
    for(int i=0; i < 100010; i++){
        if(x == 1){
            cout << i << endl;
            return 0;
        }
        x = a[x];
    }
    cout << -1 << endl;
}