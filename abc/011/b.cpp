#include <bits/stdc++.h>
using namespace std;
int main(){
    string S; cin >> S;
    S[0] = toupper(S[0]);
    for(int i = 1; i < S.size(); i++){
        S[i] = tolower(S[i]);
    }
    cout << S << endl;
}