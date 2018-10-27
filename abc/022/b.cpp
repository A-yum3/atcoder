#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int board[100010] = {0};
    int cnt=0;
    for(int i=0; i < N; i++){
        int tmp; cin >> tmp;
        board[tmp]++;
        if(board[tmp] > 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
}