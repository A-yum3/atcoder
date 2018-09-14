#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans = c / min({a,b});
    cout << ans << endl;
}