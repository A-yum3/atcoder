#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l,i;
    cin >> n >> l;
    string s[102];
    for(i=0; i < n; ++i) cin >> s[i];
    sort(s, s+n);
    for(i=0; i < n; ++i) cout << s[i];
    cout << endl;
}