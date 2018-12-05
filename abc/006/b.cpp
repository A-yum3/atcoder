// メモ化再帰、DP学習してからやる

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;
int N[MAX_N];

int solve(int n){
    if(n == 1 || n == 2) return 0;
    else if(n == 3) return 1;
    else return solve(n-1) + solve(n-2) + solve(n-3);
}

int main(){
    int n; cin >> n;
    int rel = solve(n);
    cout << (rel % 10007) << endl;
}