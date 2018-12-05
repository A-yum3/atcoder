#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[100], y[100];
    double saidai=0;
    for(int i=0; i < n; i++) cin >> x[i] >> y[i];
    for(int i=0; i < n; i++){
        for(int j=i+1; j<n; j++){
            saidai=max(saidai,sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)));
        }
    }
    cout << saidai << endl;
}