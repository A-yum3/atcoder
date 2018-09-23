#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M,X,Y; cin >> N >> M >> X >> Y;
    int  x[110],y[110];
    for(int i=0; i < 110; i++) x[i] = -110;
    for(int i=0; i < 110; i++) y[i] = 110;
    for(int i=0; i<N; i++) cin >> x[i];
    for(int i=0; i<M; i++) cin >> y[i];
    sort(x, x+110, greater<int>());
    sort(y, y+110);
    for(int i=X+1; i <= Y; i++){
        if(x[0] < i){
            if(y[0] >= i){
                cout << "No War" << endl;
                return 0;
            }
        }
    }
    cout << "War" << endl;
}