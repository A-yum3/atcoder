#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int x[110], y[110], h[110];
    for(int i=0; i < N; i++) cin >> x[i] >> y[i] >> h[i];
    int maxh=0,idx=0;;
    for(int i=0; i < N; i++){
        if(h[i] > maxh){
            maxh = h[i];
            idx = i;
        }
    }
    int miny=110,maxx=0,sumx=0,sumy=0;
    for(int i=0; i < N; i++){
        if(h[i] == maxh){
            if(maxx < x[i]) maxx = x[i];
            if(miny > y[i]) miny = y[i];
        }
        sumx += x[i];
        sumy += y[i];
    }
    if(N >= 4){
        cout << sumx / N << " " << sumy / N << " " << maxh+1 << endl;
    } else{
        cout << maxx << " " << miny << " " << maxh+1 << endl;
    }

}