#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a=1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]) a++;
        else cout << s[i] << a, a=1;
    }
    cout << endl;
}