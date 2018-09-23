#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    long long rel;
    rel = k * pow(k-1, n-1);
    cout << rel << endl;
}