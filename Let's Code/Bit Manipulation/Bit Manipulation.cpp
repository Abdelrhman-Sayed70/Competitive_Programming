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
        add n zero to right
        shift bits to the left n times (newval = oldval * pow(2,n))
        (a << b) = a*(2^b)
        10 : 01010
        <<1: 10100
    */
    cout << (10 << 1); // 10*2
}
void rightshift() {
    /*
      remove the most right bit
      shift bits to the right n times (newval = old val / pow(2,n))
      (a >> b) = a/(2^b)
      10 : 01010
      >>1: 00101
    */
    cout << (10 >> 1); // 10/2
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
void x_minus_1() {
    // 16 : 10000
    // 15 : 01111
}
void n_and_n_minus_1() {
    int n = 10;
    cout << (n & (n - 1));
    //remove first bit from right
}
void rec(int n, string& s) {
    if (n <= 1) { s.push_back((n & 1) + '0'); return; }
    rec((n >> 1), s);
    s.push_back((n & 1) + '0');
}
string decimaltobinary(int n) {
    string ans;
    rec(n, ans);
    return ans;
}
int binarytodecimal(string s) {
    int p = 0 , num = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        num += (s[i] - '0') * pow(2, p);
        p++;
    }
    return num;
}
void X_modulas_2power_n() {
    // x % (2 power n) 
    // x : (2^5)+(2^3)+(2^1)+(2^0)
    // x :   1  0  1  0  1   1  
    // 2^n : 2^4 
    // all powers that has value of 4 and more will be devisible and the modules be 0 else will be the same value 
    // modules : 0 + (2^3) + (2^1) + (2^0) 
    //           0 0 1 0 1 1
    //  1 0 1 0 1 1
    //& 0 0 1 1 1 1 -> make zero to all powers that greater or equal to n = ((2^n)-1)
    //  0 0 1 0 1 1 
    int x, n; cin >> x >> n;
    int mod = (1<<n) - 1; // 1<<4 = 2pow4
    cout << (x & mod);
}
int countBit1(int n) {
    int cnt = 0;
    while (n) {
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
}
int countBit0(int n) {
    int cnt = 0;
    while (n) {
        cnt += !(n & 1);
        n >>= 1;
    }
    return cnt;
}
bool getBit(ll n, int index) {
    return ((n >> index) & 1);
}
int setBit1(int n, int index) {
    return (n | (1 << index));
}
int setBit0(int n, int index) {
    return n & ~(1 << index);
}
int flipBit(int n, int index) {
    return n ^ (1 << index);
}
bool ispowerof2(int n) {
    return(n and !(n & n - 1));
}
int main() {
    
}