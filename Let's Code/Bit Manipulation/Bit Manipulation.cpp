#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void AND() {
    int a = 10, b = 9;
    int res = a & b;
    // 10 : 1010
    // 9  : 1001
    // &  : 1000
    // res is less than or equal to largest number 
    cout << res; // 8 
}
void OR() {
    int a = 10, b = 9;
    int res = a | b;
    // 10 : 1010
    // 9  : 1001
    // |  : 1011 
    // res is greater than or equal to largest number   
    cout << res; // 11
}
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
void leftshift() {
    /*
        shift bits to the left n times (newval = oldval * pow(2,n))
        (a << b) = a*(2^b)
        10 : 01010
        <<1: 10100
    */
    cout << (10 << 1); // 10*2
}
void rightshift() {
    /*
      shift bits to the right n times (newval = old val / pow(2,n))
      (a >> b) = a/(2^b)
      10 : 01010
      >>1: 00101
    */
    cout << (10 >> 1); // 10/2
}
int getBit(ll num, int idx) {
    return ((num >> idx) & 1);
    // index zero based
    /*
        10 : 1010
        gitbit(1) : 1 , gitbit(0) = 0
        -------------------------------------
        9  : 1001
        gitbit(0) = 0
        gitbit(3) = 1
    */
}
ll setBit(ll num, int idx, bool val) {
    return val ? (num | (1LL << idx)) : (num & ~(1LL << idx));
}
ll flipBit(ll num, int idx) {
    return (num ^ (1LL << idx));
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

}