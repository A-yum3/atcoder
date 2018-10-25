#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int diff = abs(a - b);
    int rel = min(diff, 10 - diff);
    cout << rel << endl;
}