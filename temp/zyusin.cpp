#include <bits/stdc++.h>
using namespace std;

int main(){
    double a = 0.1, ans = 0;
    for(int i=0; i < 100; i++){
        ans += a;
        if(i % 10 == 0){
            cout << ans << endl;
        }
    }
    cout << ans << endl;
}