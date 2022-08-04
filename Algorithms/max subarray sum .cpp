#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<ll> V(n);
    for (auto& it : V) cin >> it;
    ll mx = -1e9;
    ll sum = 0;
    for(int i=0;i<n;i++) {
        sum += V[i];
        mx = max(mx, sum);
        if (sum < 0) { sum = 0; }
    }
    cout << mx;
}