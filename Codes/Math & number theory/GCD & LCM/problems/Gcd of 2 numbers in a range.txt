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
void do_it() {
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
    sort(v.begin(),v.end());
    int n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        ll ans = -1;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] >= a and v[i] <= b) ans = v[i];
        }
        cout << ans << "\n";
    }
}
int main() {
    do_it();
}