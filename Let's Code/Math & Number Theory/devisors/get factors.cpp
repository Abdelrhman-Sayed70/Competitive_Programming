#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// Time complexity : square root of n
vector<ll> getfactors(ll n) {
    vector<ll>ans;
    for (int i = 1; i * i <= (n); i++) {
        if (n % i == 0) {
            ans.push_back(i);
            if (n / i != i) {
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
int main() {
    vector<ll>v = getfactors(20);
    for (auto it : v) { cout << it << "  "; }
}