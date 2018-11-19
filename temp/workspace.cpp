#include <bits/stdc++.h>
using namespace std;

string board[10];
int dx[] = {-1, -1, -1};
int dy[] = {-1, 0, -1};
string m[] = {"L" , "S", "R"};
string rel;

int search(int ii,int jj,int ww){
    int cnt=0;
    for(int k=0; k < 3; k++){
        int x = ii - dx[k];
        int y = jj - dy[k];
        if(0 <= x && y <= ww-1){
            if(board[x][y] == '.'){
                rel += m[k];
                search(x,y,ww);
                return 0;
            }
            else{
                cnt++;
            }
        }
        else if(x < 0){
            return 0;
        }
        if(cnt == 3) cout << "impossible" << endl;
        else{
            cout << rel << endl;
        }
    }
}

int main(){
    int h,w; cin >> h >> w;
    for(int i=0; i < h; i++) cin >> board[i];
    for(int i=0; i < h; i++){
        for(int j=0; j < w; j++){
            if(board[i][j] == 's'){
                search(i,j,w);
            }
        }
    }
}