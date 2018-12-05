#include <bits/stdc++.h>
using namespace std;
long long A[1000000];
int main(){
    long long X,Y; cin >> X >> Y;
    int index =0;
    for(long long i=X; i <= Y; i*= 2){
        A[index] = i;
        index++;
    }
    cout << index << endl;
    return 0;
}