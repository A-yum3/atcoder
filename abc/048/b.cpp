#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,x; cin >> a >> b >> x;
    cout << b/x - a/x + !(a%x) << endl;
}