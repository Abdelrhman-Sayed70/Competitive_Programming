# Dima and Lisa
## [Dima and Lisa | Codeforces](https://codeforces.com/contest/584/problem/D)

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
    if (isPrime(n)) {
        cout << "1\n" << n;
        return;
    }
    if (isPrime(n - 2)) {
        cout << "2\n2 " << n - 2;
        return;
    }

    cout << "3\n";
    for (int i = 3;; i += 2) {
        if (isPrime(i)) {
            for (int j = 3; j < n; j += 2) {
                if (isPrime(j) and isPrime(n - (i + j))) {
                    cout << i << " " << j << " " << n - (i + j);
                    return;
                }
            }
        }
    }
}
```
