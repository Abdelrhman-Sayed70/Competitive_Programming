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
  /*
    Def :
    GCD(Greatest common devisor) >> The highest number that divides exactly into two or more numbers.
    the answer will be less than or equal the least number 
    
    prop : 
    -gcd (a, 0) = |a|, 
    -gcd(1 ,any number) = 1  
    -if a divides the product b ⋅ c, and gcd (a, b) = d, then a / d divides c.
  */
}