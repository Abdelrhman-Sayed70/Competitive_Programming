#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,  ll b) {
    // recursive 
    // gcd(a,b) =gcd(b,a%b)
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll gcd(ll a, ll b) {
    // iterative 
    // gcd(a,b) =gcd(b,a%b)
    while (b != 0) {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}
int main() {
    // GCD
    // gcd(0,any number) = number
}