#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sumall(ll a, ll n) {
    // Formula : sum = (first number + last number) * (number of numbers) / 2
    // in main make sure that n >= a
    ll numOfnums = n - a + 1;
    ll sum = (a + n) * numOfnums / 2;
    return sum;
}
int main() {
    int a, b;
    cin >> a >> b;
    if (b >= a) { cout << sumall(a, b); }
    else  cout << sumall(1, a);
}