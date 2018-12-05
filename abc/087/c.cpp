#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[2][110] = {0};
    for(int i=1; i <= n; i++) cin >> a[0][i];
    for(int i=1; i <= n; i++) cin >> a[1][i];
    for(int i=1; i<= n; i++){
        a[0][i] += a[0][i-1];
        a[1][i] += max(a[0][i], a[1][i-1]);
    }
    cout << a[1][n] << endl;
}