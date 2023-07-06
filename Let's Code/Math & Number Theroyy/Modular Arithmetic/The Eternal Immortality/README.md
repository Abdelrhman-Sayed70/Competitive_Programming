# The Eternal Immortality
## [The Eternal Immortality | Codeforces](https://codeforces.com/contest/869/problem/B) 

## Approach
- When we multiply a set of numbers that has only one number with a value of multiples of 10 the last digit of the answer will be zero
- The last digit of multiplying any set of numbers will be the same when you multiply only the last digits of those numbers

## Solution
```cpp
void doIt() {
    ll a, b;
    cin >> a >> b;
    if (b - a >= 10) {
        cout << 0;
        return;
    }
    ll ans = 1;
    for(ll i = b; i > a; i--){
        ans *= (i % 10);
    }
    cout << ans % 10;
}
```
