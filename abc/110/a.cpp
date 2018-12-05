#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int d,b,c;
    cin >> d >> b >> c;
    a.push_back(d);
    a.push_back(b);
    a.push_back(c);
    std::sort(a.begin(), a.end());
    cout << a[2] * 10 + a[1] + a[0] << endl;
}