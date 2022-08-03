#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ll n, mx = -1; cin >> n; 
    for (int i = 0; i < n; i++) { ll in; cin >> in; mx = max(in, mx); }
    cout << mx;
}