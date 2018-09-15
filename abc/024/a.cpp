#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,k,s,t,mi=0;
    cin>>a>>b>>c>>k>>s>>t;
    if(s+t >= k){
        mi = (s+t) * -c;
    }
    cout << s*a + t*b + mi << endl;
}