#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long s1,s2,c1,c2,a;
    for(int i=1; i <= n; i++){
        cin >> a;
        s1 += a;
        s2 += a;
        if(i % 2){
            if (s1 <= 0) c1 += 1 - s1,s1 = 1;
            if (s2 >= 0) c2 += 1 + s2,s2 = -1;
        }
        else {
            if (s1 >= 0) c1 += 1 + s1,s1 = -1;
            if (s2 <= 0) c2 += 1 - s2,s2 = 1;
        }
    }
    cout << min(c1, c2) << endl;
    return 0;
}