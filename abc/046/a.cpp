#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    set<int> n;
    cin >> a >> b >> c;
    n.insert(a); n.insert(b); n.insert(c);
    cout << n.size() << endl;
}