#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll sumall(ll a, ll n) {
    ll sum1 = n * (n + 1) / 2;
    ll sum2 = a * (a + 1) / 2;
    ll sum = sum2;
    if (n >= a) {
        sum = sum1 - sum2 + a;
    }
    return sum;
}
int main() {
    int a, b; 
    cin >> a >> b; 
    cout << sum_from_a_to_b(a, b);
}