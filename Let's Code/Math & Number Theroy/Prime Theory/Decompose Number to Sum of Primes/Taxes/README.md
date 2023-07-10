# Taxes
## Solution
```cpp
bool isPrime(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void doIt() {
    ll n;
    cin >> n;
    if (isPrime(n))
        cout << 1 << "\n";

    else if (n % 2 == 0 or isPrime(n - 2))
        cout << 2 << "\n";

    else
        cout << 3;
}
```
