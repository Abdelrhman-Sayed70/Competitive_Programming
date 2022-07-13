
#include<bits/stdc++.h>
using namespace std;

ll sum(ll n) {
    return n * (n + 1) / 2;
}
ll custom_sum(ll a , ll b , ll c) {
    return  sum(max(a, b) / c) * c - sum((min(a, b)-1) / c) * c;
}
int main(){
    ll a, b, x;
    cin >> a >> b >> x; 
    cout << custom_sum(a, b, x);
}