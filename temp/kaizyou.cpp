#include <bits/stdc++.h>
using namespace std;

int kaizyou(int a){
    if(a == 0) return 1;
    else return kaizyou(a - 1) * a;
}

int main(){
    int n,rel=1;
    cin >> n;
    // 再帰関数を使って計算
    cout << kaizyou(n) << endl;
    // 関数を使わないで計算
    for(int i = n; i > 0; i--){
        if(i) rel *= i;
    }
    cout << rel << endl;
}
