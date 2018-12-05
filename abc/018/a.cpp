#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x=1,y=1,z=1;
    if(a>b) y++;
    else x++;
    if(a>c) z++;
    else x++;
    if(b>c) z++;
    else y++;
    cout << x << endl << y <<endl << z << endl;
}