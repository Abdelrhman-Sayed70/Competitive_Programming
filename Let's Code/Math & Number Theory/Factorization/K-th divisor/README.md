# K-th divisor
## [K-th divisor | Codeforces](https://codeforces.com/group/isP4JMZTix/contest/397371/problem/A)

## Solution
```cpp
vector<ll> getDivisors(ll n) {
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(all(v));
    return v;
}
void doIt() {
    ll n, k;
    cin >> n >> k;
    k--;
    vector<ll> divisors = getDivisors(n);
    cout << (k < divisors.size() ? divisors[k] : -1);
}
```
