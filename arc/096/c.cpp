#include <bits/stdc++.h>
using namespace std;
int main(){
    int X,Y,A,B,C;
    cin >> A >> B >> C >> X >> Y;
    C = min(A+B, 2 * C);
    A = min(A,C);
    B = min(B,C);
    int R = min(X,Y);
    cout << (X - R) * A + (Y - R) * B + R * C << endl;
}