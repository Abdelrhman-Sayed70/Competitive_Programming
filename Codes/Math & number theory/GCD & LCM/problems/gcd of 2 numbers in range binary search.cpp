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
        int start = 0, end = v.size() - 1, mid;
        int ans = -1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (v[mid] < a) {
                start = mid + 1;
            }
            else if (v[mid] > b) {
                end = mid - 1;
            }
            else if (v[mid] >= a and v[mid] <= b) {
                ans = v[mid];
                start = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}
int main() {
    do_it();
}