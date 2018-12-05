#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for(int c; cin >> c;) s.insert(c);
    cout << s.size();
}