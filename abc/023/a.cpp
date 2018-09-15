#include <bits/stdc++.h>
using namespace std;

int SumOfDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int x;
    cin >> x;
    cout << SumOfDigit(x) << endl;
}