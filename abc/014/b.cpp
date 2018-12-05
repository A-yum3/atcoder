#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, X; cin >> n >> X;
    int s = 0;
    for(int i=0; i < n; i++){
        int a; cin >> a;
        s += X % 2 * a;
        X /= 2;
    }
    cout << s << endl;
}