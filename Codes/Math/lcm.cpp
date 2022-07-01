#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    // lcm(a,b) = (a*b) / gcd(a,b)
    return a / gcd(a, b) * b ;
}
int main() {
    // LCM 
    // lcm(1,any number) = number
    // gcd(a,b)+lcm(a,b)=x when (a=1 and b=x-1) 
}