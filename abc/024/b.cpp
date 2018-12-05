#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,T,rel = 0,tmp,tmpr; cin >> N >> T >> tmp;
    for(int i=1; i < N; i++){
        cin >> tmpr;
        rel += min(T, tmpr-tmp);
        tmp = tmpr;
    }
    cout << rel+T << endl;
}