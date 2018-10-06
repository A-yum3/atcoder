#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int x[110], y[110], h[110];
    for(int i=0; i < N; i++) cin >> x[i] >> y[i] >> h[i];
    int m[101];
    for(int i=0; i < 101; i++) m[i] = 0;
    for(int k=0; k < N - 1; k++){
        for(int i=0; i < 101; i++){
            for(int j=0; j < 101; j++){
                int H = h[k] + abs(x[k] - i) + abs(y[k] - j);
                int HN = h[k+1] + abs(x[k] - i) + abs(y[k] - i);
                if(H == HN) m[H] += 1;
            }
        }
    }
    for(int k=0; k < N; k++){
        if( m[k] == N-1 ){
            for(int i=0; i < 101; i++){
                for(int j=0; j < 101; j++){
                    if(k == h[0] - abs(x[0] - i) - abs(y[0] - j)){
                        cout << i << " " << j << " " << k << endl;
                    }
                }
            }
        }
    }
}