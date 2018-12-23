#include <bits/stdc++.h>
using namespace std;

// 各桁の総和を求めて返す関数
int SumOfDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// sortの使い方
/* sort(配列,配列+配列の長さ,greater<int>()) で降順 */

// 最大公約数を変換するgcd(ユークリッド互除法)
int gcd(int a, int b) { return b ? gcd(b, a%b) : a;}

// 文字列反転
// reverse(スタート、終点)

// 事故防止のためにグローバル変数で宣言すると気が楽

// 素数を求める

void sosuu(int n){
    for(int i=2; i * i <= n; i++){
        if(n % i == 0) cout << i << endl;
    }
}