#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    map<string, int> ma;
    int ans = 0;
    string s;
    for(int i=0; i < N; i++){
        string S; cin >> S;
        ma[S]++;
        if(ma[S] > ans) {
            ans = ma[S];
            s = S;
        }
    }
    cout << s << endl;
}