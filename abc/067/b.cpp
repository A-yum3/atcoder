#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int l[60];
    for(int i=0; i < n; ++i) cin >> l[i];
    sort(l, l + n, greater<int>());
    int sum=0;
    for(int i=0; i < k; i++){
        sum += l[i];
    }
    cout << sum << endl;
}