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
void tow_power_x_minus_1() {
    //  walk form right and make all zeroes to one till you find one then make the rest equal to 0 

    // (2^1) = 2 = 10 
    // (2^1)-1 = 1 = 01

    // (2^3) = 8 = 1000
    // (2^3)-1 = 7 = 0111

    // (2^4) = 16 = 10000
    // (1^4)-1 = 15 = 01111
}
void n_Minus_1(int n) {
    // walk from right and make all zero bit to one till you find one then make it zero and terminate 
    // n : 101001000
    //n-1: 101000111

    // n :100100
    //n-1:100011

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
    int p = 0, num = 0;
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
    int mod = (1 << n) - 1; // 1<<4 = 2pow4
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
int countBit1_optimized(int n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n &= (n - 1);
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
int make_First_bit_One_to_Zero(int n) {
    return (n & (n - 1));
}
int getthelastBit1value(int n) {
    return (n & ~(n - 1));
}
void bitset_(int n) {
    bitset<32>x(n); // pase constant value between <> refere to the size of the binary rep of n 
    cout << "Binary rep : " << x.to_string() << "\n";
    cout << "decimal rep : " << x.to_ullong() << "\n";
    // update 
    //idx: 210
    // 7 : 111 
    x[0] = 0;
    cout << x.to_string() << "\n"; // 110  
}
void betset_traverse() {
    int n; cin >> n;  
    bitset<32>B(n); 
    for (int i = 0; i < B.size(); i++) {
        cout << B[i];
    }
    cout << "\n";
}
void comparing_2_number_in_bainary() {
    int n, m; 
    cin >> n >> m; 
    bitset<32>B1(n), B2(m);
    cout << B1.to_string() << "\n" << B2.to_string()<<"\n";
    int cnt = 0;
    for (int i = 0; i < 32; i++) {
        cnt += (B1[i] != B2[i]);
    }
    cout << cnt; 
}
void generate_all_number_has_only_ones() {
    // form 1 to 1e18 
    // numbers that has only one is (2^x)-1 such that x from 2 to 63
    vector<ll>v;
    for (int i = 1; i <= 63; i++) {
        v.push_back((1LL<<i)-1);
    }
    for (auto it : v) {
        bitset<64>B(it);
        cout << B << "\n";
    }
}
void generate_all_number_has_only_one_zero() {
    // form 1 to 1e18 
    // numbers that has only one is (2^x)-1 such that x from 2 to 63
    // numbers that has only one zero come form number has all ones and subtract form it number with power of 2 in some condition
    // ex : 7-2 = 5 -> 101  
    vector<ll>v ,ans;
    for (int i = 1; i <= 63; i++) {
        ll it = (1LL << i) - 1;
        for (int j = 0; j < i-1; j++) {
            ll val = it - (1LL << j);
            ans.push_back(it - val);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto it : ans) {
        cout << it << "\n";
    }
}
void bitMask() {
    // generate all possible subsequance 
    // number of subseq = (2 power n ) - 1
    int n; cin >> n;
    vector<int>v(n);
    for (auto& it : v) { cin >> it; }
    cout << "\n";
    for (int i = 1; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (getBit(i, j)) { cout << v[j] << " "; }
        }
        cout << "\n";
    }
}
int main() {
    generate_all_number_has_only_one_zero();
}