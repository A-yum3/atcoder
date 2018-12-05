#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s,t,w,a;
    cin >> n >> s >> t;
    int counter =0;
    for(int i=0; i < n; i++){
        cin >> a;
        w += a;
        if(s <= w && w <= t) counter++;
    }
    cout << counter << endl;
}