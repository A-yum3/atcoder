#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b*c > a*d) cout << "TAKAHASHI" << endl;
    else if(b*c == a*d) cout << "DRAW" << endl;
    else cout << "AOKI" << endl;
}