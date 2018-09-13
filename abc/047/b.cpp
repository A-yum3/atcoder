#include <bits/stdc++.h>
using namespace std;
int main() {
    int w,h,n,x[110],y[110],a[110];
    cin >> w >> h >> n;
    int minx=0,miny=0,maxx=w,maxy=h;
    for(int i=0; i < n; i++) cin >> x[i] >> y[i] >> a[i];
    for(int i=0; i < n; i++){
        switch(a[i]){
            case 1:
                minx = max(minx,x[i]);
                break;
            case 2:
                maxx = min(maxx,x[i]);
                break;
            case 3:
                miny = max(miny,y[i]);
                break;
            case 4:
                maxy = min(maxy,y[i]);
                break;
            default: ;
        }
    }
    cout << (max(maxx-minx,0) * max(maxy-miny,0)) << endl;
}