#include <bits/stdc++.h>
using namespace std;
string board[50];
const int dx[] = {1,1,0,-1,-1,-1,0,1};
const int dy[] = {0,1,1,1,0,-1,-1,-1};
int main(){
    int h,w; cin >> h >> w;
    for(int i=0; i < h; ++i) cin >> board[i];
    for(int i=0; i < h; ++i){
        for(int j=0; j < w; ++j){
            if(board[i][j] == '#') continue;
            int num=0;
            for(int k=0; k < 8; ++k){
                const int x = i + dx[k];
                const int y = j + dy[k];

                if(x < 0 || h <= x) continue;
                if(y < 0 || w <= y) continue;
                if(board[x][y] == '#') num++;
            }
            board[i][j] = char(num + '0');
        }
    }
    for(int i=0; i < h; i++) cout << board[i] << endl;
}