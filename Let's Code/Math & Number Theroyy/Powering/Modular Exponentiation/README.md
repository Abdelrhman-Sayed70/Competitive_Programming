# Modular Exponentiation
## [Modular Exponentiation | Codeforces](https://codeforces.com/contest/913/problem/A)

## Solution
```cpp
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
bool exceed = false;
ll fastPower(int base, int power, int m){
    if (power == 1){
        return base;
    }
    ll a = fastPower(base, power / 2, m);
    if (a > m) {
        exceed = true;
        return 0;
    }
    if (power & 1)
        return a * a * base;
    else
        return a * a;
}
void doIt() {
    ll n, m;
    cin >> n >> m;
    ll ans = fastPower(2, n, m);
    if (exceed)
        cout << m;
    else
        cout << m % ans;
}
```
