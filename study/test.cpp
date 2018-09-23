#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b; cin >> n >> m >> a >> b;
    int min=100, max=0;
    for(int i=0; i < m; i++){
        int l,r; cin >> l >> r;
        min = std::min(l,min);
        max = std::max(r,max);
    }
    int total =0;
    for(int i=1; i <= n; i++){
        if(min <= i && i <= max) total += a;
        else total += std::max(a,b);
    }
    cout << total << endl;
}