#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,min = 1001, max = -1;
    cin >> n;
    for(int i=1; i <= n; i++){
        cin >> a;
        if(min > a) min = a;
        if(max < a) max = a;
    }
    cout << max - min << endl;
    return 0;
}