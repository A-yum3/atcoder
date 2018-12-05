#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int H = N / 3600;
    int M = (N % 3600) / 60;
    int S = (N % 3600) % 60;
    printf("%02d:%02d:%02d", H,M,S);
}