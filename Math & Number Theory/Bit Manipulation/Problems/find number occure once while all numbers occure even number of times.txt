#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void XOR() {
    int a = 10, b = 9;
    int res = a ^ b;
    // 10 : 1010
    // 9  : 1001
    // ^  : 0011  (same : 0 , diff : 1)
    // res is unpredicted   
    // 0 ^ x = x 
    // x ^ x = 0 
    //(A ^ B ^ C ^ D ^ E) ^ (A ^ B ^ C) = D ^ E
    cout << res; // 11
}
void exampleXOR() {
    /*  Given a set of numbers where
        all elements occur even
        number of times except one
        number, find the odd occurring
        number
   */
    int n; cin >> n; 
    int Xor = 0;
    while (n--) {
        int in; cin >> in; 
        Xor ^= in;
    }
    cout << Xor;
}
int main() {
    exampleXOR();
}