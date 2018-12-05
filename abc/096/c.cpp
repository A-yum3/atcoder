#include <bits/stdc++.h>
using namespace std;
string board[60];
const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};
int main(){
    int h,w; cin >> h >> w;
    for(int i=0; i < h; i++) cin >> board[i];
    for(int i=0; i < h; i++){
        for(int j=0; j < w; j++){
            if(board[i][j] == '.') continue;
            int cnt = 0;
            for(int k=0; k < 4; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                if(x < 0 || x > h) continue;
                if(y < 0 || y > w) continue;
                if(board[x][y] == '#') cnt++;
            }
            if(cnt == 0){cout << "No" << endl; return 0;}
        }
    }
    cout << "Yes" << endl;
    return 0;
}