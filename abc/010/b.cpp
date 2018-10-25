#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int rel = 0;
    for(int i=0; i < n; i++){
        int a; cin >> a;
        while(a > 0){
            if(a % 3 == 2 || a % 2 == 0){
                rel++;
                a--;
            } else {
                break;
            }
        }
    }
    cout << rel << endl;
}