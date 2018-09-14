#include <bits/stdc++.h>
using namespace std;
int main(){
    int l1,l2,l3,ans;
    cin >> l1 >> l2 >> l3;
    if(l1 == l2) ans = l3;
    if(l2 == l3) ans = l1;
    if(l1 == l3) ans = l2;
    cout << ans << endl;
}