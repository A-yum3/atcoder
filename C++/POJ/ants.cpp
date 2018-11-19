#include <bits/stdc++.h>
using namespace std;
int main(){
    int L,n;
    int x[1000000];
    cin >> L >> n;
    for(int i = 0; i < n; i++) scanf("%d", &x[i]);
    int minT = 0;
    for(int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L - x[i]));
    }

    int maxT = 0;
    for(int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L - x[i]));
    }

    printf("%d %d\n", minT, maxT);
}