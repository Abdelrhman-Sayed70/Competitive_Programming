# Nearest Power of Two
## [Nearest Power of Two | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/smallest-power-of-2-greater-than-or-equal-to-n2630/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Solution
```cpp
void doIt() {
    int n, index = 0;
    cin >> n;
    while (1LL << index < n) {
        index++;
    }
    ll ans = 1LL << index;
    cout << ans;
}
```
