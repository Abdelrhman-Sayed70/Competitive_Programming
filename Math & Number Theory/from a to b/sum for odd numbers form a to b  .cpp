#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sumodd(ll a, ll n) {
    // Formula : sum = (first number + last number) * (number of numbers) / 2
    // in main make sure that n >= a
    if (a % 2 == 0) a++;
    if (n % 2 == 0) n--;
    ll numOfnums = ((n - a) / 2) + 1;
    ll sum = (a + n) * numOfnums / 2;
    return sum;
}
int main() {
    int a, b;
    cin >> a >> b;
    if (b >= a) { cout << sumodd(a, b); }
    else  cout << sumodd(1, a);
}