#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int a = 0x2d;
    int b = 0x19;
    cout << a << " AND " << b << " = " << (a&b) << endl;
    cout << bitset<8>(a) << " AND " << bitset<8>(b) << " = " << bitset<8>(a&b) << endl;
}