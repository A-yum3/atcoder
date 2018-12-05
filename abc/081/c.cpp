#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    vector<int> balls;
    int i,j,t;
    cin >> n >> k;
    balls.resize(n);
    for(i=0;i<n;i++){
        cin >> t;
        balls[t-1]++;
    }
    t=0;
    sort(balls.begin(),balls.end());
    for(i=0;i<n-k;i++) t += balls[i];
    cout << t << endl;
}