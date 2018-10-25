#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C; cin >> A >> B >> C;
    char rel;
    if(A+B==C && A-B==C) rel = '?';
    else if(A+B==C) rel = '+';
    else if(A-B==C) rel = '-';
    else rel = '!';
    cout << rel << endl;
}