#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void AND() {
    int a = 10, b = 9;
    int res = a&b ;
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
int main() {
    rightshift();
}