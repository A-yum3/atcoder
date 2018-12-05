#include <bits/stdc++.h>
using namespace std;
int main(){
    string A; cin >> A;
    if(A.size() > 1){
        cout << 'a' << endl;
    } else if (A[0] == 'a') {
        cout << -1 << endl;
    } else {
        cout << 'a' << endl;
    }
}