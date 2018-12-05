#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int s = 0;
    int cnt = 0;
    for(int i=0; i < N; i++){
        int a; cin >> a;
        s += a;
        if(a) cnt++;
    }
    cout << (s + cnt - 1) / cnt << endl;
}