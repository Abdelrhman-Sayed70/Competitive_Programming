#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll gcd(ll a, ll b) {
    // recursive 
    // gcd(a,b) =gcd(b,a%b)
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
void common_devisors_of_2numbers() {
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    vector<ll>v;
    for (ll i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            v.push_back(i);
            if (g / i != i) {
                v.push_back(g / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto i : v) { cout << i << "\n"; }
}
int main() {
    common_devisors_of_2numbers();
}