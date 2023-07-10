# Relatively Prime Pairs
## [Relatively Prime Pairs | Codeforces](https://codeforces.com/contest/1051/problem/B)

## Approach
- Alwayes the answer will be exist.
- gcd between each 2 consecutive numbers = 1


## Solution
```cpp
void doIt() {
    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    for (ll i = l; i < r; i += 2) {
        cout << i << " " << i + 1 << "\n";
    }
}
```
