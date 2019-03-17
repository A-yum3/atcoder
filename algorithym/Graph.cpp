#include<bits/stdc++.h>
using namespace std;

int V[100][100] = {{0}};

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int u, k; cin >> u >> k;
        for(int i = 0; i < k; i++){
            int v; cin >> v;
            V[u - 1][v - 1] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j) cout << " ";
            cout << V[i][j];
        }
        cout << endl;
    }
}