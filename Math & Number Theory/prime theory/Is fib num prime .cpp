#include<bits/stdc++.h>
using namespace std;
#define ll long long 

const int N = 55;
bool isprime[N];
vector<ll>fib(55);
bool isprimee(ll n) {
    if (n == 2) { return true; }
    if (n == 0 or n == 1 or n % 2 == 0) { return false; }
    else {
        for (ll i = 3; i * i <= n; i += 2) {
            if (n % i == 0) { return false; }
        }
    }
    return true;
}
void do_it() {
    ll n; cin >> n;
    cout << (isprime[n] ? "prime" : "not prime");
    cout << "\n";
}
int main() {
 
    memset(isprime, 1, sizeof(isprime));
    isprime[1] = isprime[2] = false;
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        ll val = fib[i];
        isprimee(val) ? isprime[i] = 1 : isprime[i] = 0;
    }
    int t = 1;
    cin >> t;
    while (t--) {
        do_it();
    }
}