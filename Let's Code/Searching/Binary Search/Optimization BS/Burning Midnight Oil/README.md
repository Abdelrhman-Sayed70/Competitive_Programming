# Burning Midnight Oil
## [Burning Midnight Oil | Codeforces](https://codeforces.com/contest/165/problem/B)

## Approach
- Check monotonicity **`passed`**

## Solution
```cpp
bool can(int v, int n, int k) {
    int cnt = 0;
    while (v / int(pow(k, cnt)) > 0) {
        n -= (v / int(pow(k, cnt)));
        cnt++;
    }
    return n <= 0;
}
void doIt() { 
    int n, k; 
    cin >> n >> k; 
    int start = 1, end = n, mid, ans;
    while (start <= end) {
        mid = (start + end) / 2;
        if (can(mid, n, k)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << ans;
}
```
