#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int v[100010];
    for(int i=0; i < n; i++) cin >> v[i];
    int rel =0;
    for(int i=1; i < n; i++){
        if(abs(v[i-1] - v[i]) % 2 == 1) {(v[i-1] < v[i] ? v[i]++ : v[i]--); rel++;}
        else if((v[i-1] - v[i]) == 0) {v[i]+=2; rel++;}
        else continue;
    }
    cout << rel << endl;
}