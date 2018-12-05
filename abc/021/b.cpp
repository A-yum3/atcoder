#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    int a,b; cin >> a >> b;
    int bo[110]={0}; bo[a]++; bo[b]++;
    int K; cin >> K;
    for(int i=0; i < K; i++) {
        int tmp; cin >> tmp;
        bo[tmp]++;
        if(bo[tmp] >= 2){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}