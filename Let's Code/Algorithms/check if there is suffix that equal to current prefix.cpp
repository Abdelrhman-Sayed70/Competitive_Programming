#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int n; cin >> n;
    vector<ll>v(n), prefix(n), suffix(n);
    multiset<ll>ms;
    for (auto& it : v) { cin >> it; }
    prefix[0] = v[0]; suffix[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++) { prefix[i] = v[i] + prefix[i - 1]; }
    for (int i = n - 2; i >= 0; i--) { suffix[i] = suffix[i + 1] + v[i]; }
    for (auto it : suffix) { ms.insert(it); }
    ll mx = -1e18;
    for (int i = 0; i < n; i++) {
        ms.erase(ms.find(suffix[i]));
        if (ms.count(prefix[i])) {
            // there is suffix that equal the current prefix 
        }
    }
}