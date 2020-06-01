#include <bits/stdc++.h>
using namespace std;

vector<int> a;

bool isOK(int index, int key) {
    if(a[index] >= key)
        return true;
    else
        return false;
}

int binary_search(int key) {
    int ng = -1;
    int ok = (int)a.size();

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(isOK(mid, key))
            ok = mid;
        else
            ng = mid;
    }

    return ok;
}

int main() {
    int n;
    a.resize(n);
}