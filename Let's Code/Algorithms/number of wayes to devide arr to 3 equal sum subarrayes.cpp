#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
    int n; cin >> n;
    ll cnt = 0;
    vector<ll>v(n), prefix(n), suffix(n);
    map<ll, int>mp;
    ll sum = 0;
    for (auto& it : v) { cin >> it; sum += it; }
    if (sum % 3 != 0) { cout << 0; return 0; }
    prefix[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }
    suffix[n - 1] = v[n - 1];
    mp[suffix[n - 1]]++;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + v[i];
        mp[suffix[i]]++;
    }
    sum /= 3;
    for (int i = 0; i < n - 1; i++) {
        mp[suffix[i]]--;
        if (prefix[i] == sum) {
            cnt += mp[prefix[i]];
            if (suffix[i + 1] == prefix[i]) { cnt--; }
        }
    }
    cout << cnt;
}