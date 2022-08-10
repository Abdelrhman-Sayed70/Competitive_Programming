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
    return a / gcd(a, b) * b;
}
int main() {
    // LCM (least common multible)
    /*
        List the Multiples of each number 
        The multiples of 3 are 3, 6, 9, 12, 15, 18, ... etc
        The multiples of 5 are 5, 10, 15, 20, 25, ... etc
        least common multible of 3 , 5 is 15
        15 is multible of both 3 , 5 and the smallest 
    */
    // lcm(1,any number) = number
    // lcm(0, any number) = 0 
    // gcd(a,b) * lcm(a,b) = a*b 
    // gcd(a,b)+lcm(a,b)=x when (a=1 and b=x-1) 
}