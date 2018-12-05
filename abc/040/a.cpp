#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int ans = 0;
    if(n/2 >= x) ans = x - 1;
    else ans = n - x;
    cout << ans << endl;
}