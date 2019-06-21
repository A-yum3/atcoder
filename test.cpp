#include <bits/stdc++.h>
#include <random>
using namespace std;
template <class RandomIter>

void bogosort( RandomIter first, RandomIter last )
{
    while( !is_sorted( first, last ) )
    shuffle( first, last, default_random_engine() );
}

int main() {
    vector<int> kotake{5, 1, 7, 8};
    vector<int> ans{1, 5, 7, 8};
    int cnt = 0;
    while(!equal(kotake.cbegin(), kotake.cend(), ans.cbegin())){
        bogosort(kotake.begin(), kotake.end());
        cnt++;
    }
    cout << cnt << endl;
}