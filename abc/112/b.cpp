#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,T; cin >> N >> T;
    int c[110];
    int t[110];
    for(int i=0; i < N; i++) cin >> c[i] >> t[i];
    int minc=1001;
    for(int i=0; i < N; i++){
        if(t[i] <= T){
            if(minc > c[i]) minc = c[i];
        }
    }
    if(minc == 1001) cout << "TLE" << endl;
    else cout << minc << endl;
}