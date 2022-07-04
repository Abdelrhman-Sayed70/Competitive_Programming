#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll add(ll a, ll b, ll m)
{
    return ((a % m) + (b % m)) % m;
}
ll mul(ll a, ll b, ll m)
{
    return ((a % m) * (b % m)) % m;
}
ll sub(ll a, ll b, ll m)
{
    return ((a % m) - (b % m) + m) % m;
}
int main() {
    // Modular arithmetic 
    cout << add(10, 3, 4) << "\n";
}