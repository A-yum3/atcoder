//（予想）マップでバケット方をして、数を比較して一致した時に成立する気がする
//実装力がない為、断念

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t; cin >> s >> t;
    map<char,int> be,af;
    for(int i=0; i < s.size(); i++){
        be[s[i]]++;
        af[t[i]]++;
    }
    int b[200010],a[200010];
    for(int i=0; i < 200010; i++){
        b[i] = -1;
        a[i] = -1;
    }
    for(const int [key, value] : be){
        int i=0;
        b[i] = value;
        i++;
    }
    for(const auto [key, value] : af){
        int i=0;
        a[i] = value;
        i++;
    }
    sort(b,b+200010);sort(a,a+20010);
    for(int i=0; i < s.size(); i++){
        if(b[i] != a[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}