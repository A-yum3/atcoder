#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A,B; cin >> N >> A >> B;
    int rel = 0;
    for(int i=0; i < N; i++) {
      string s; cin >> s;
      int d; cin >> d;
      (d < A ? d = A : d > B ? d = B : d = d);
      if(s == "East") rel += d;
      else rel -= d;
    }

    if(rel < 0) cout << "West " << abs(rel) << endl;
    else if(rel == 0) cout << 0 << endl;
    else cout << "East " << rel << endl;
}