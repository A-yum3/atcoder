#include <iostream>
using namespace std;

/* 入力 */
int n;
int a[25];
int K;

int main() {
    cin >> n;
    for (int i=0; i < n; ++i) cin >> a[i];
    cin >> K;

    //全探索 --- bitは{0, 1, ..., n-1}の2^n通りの部分集合全体を動きます。
    bool exist = false;
    for (int bit = 0; bit < (1<<n); ++bit)
    {
        int sum = 0; //部分集合の和
        for (int i = 0; i < n; ++ i) {
            if (bit & (1<<i)) { //iがSに入っているなら足す
                sum += a[i];
            }
        }

        //sum がkに一致するか
        if (sum == K) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}