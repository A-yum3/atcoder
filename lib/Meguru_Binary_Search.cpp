#include<bits/stdc++.h>
using namespace std;

vecotr<int> a(n);

bool isOK(int index, int key) {
    if(a[index] >= key) return true;
    else false;
}

int binary_search(int key) {
    int ng = -1;
    int ok = (int)a.size();

    while(abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if(isOK(mid, key)) ok = mid;
        else ng = mid;
    }

    return ok;
}