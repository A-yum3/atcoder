#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long powe=1;
    for(int i=1; i <= n; i++){
        powe *= i;
        powe %= 1000000000 + 7;
    }
    cout << powe << endl;
}