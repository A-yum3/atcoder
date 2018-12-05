#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a,b;
    int sum=0;
    while(n--) {
        cin >>a>>b;
        sum += b-a+1;
    }
    cout<<sum<<endl;
}
