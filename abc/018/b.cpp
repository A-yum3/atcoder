#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    int l,r;
    for(int i=0; i < n; i++){
        cin >> l >> r;
        reverse(s.begin()+l-1, s.begin()+r);
    }
    cout << s << endl;
}