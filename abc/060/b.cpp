#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return b ? gcd(b, a%b) : a;}
int main(){
    int a,b,c; cin >> a >> b >> c;
    cout << (c % gcd(a, b) ? "NO":"YES") << endl;
}