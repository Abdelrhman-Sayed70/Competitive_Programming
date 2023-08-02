# Max Subarray Sum

## [Max Subarray Sum | CSES](https://cses.fi/problemset/task/1643/)

```cpp
ll maxSubArraySum(vector<ll>& v) {
    ll mx = -1e9, sum = 0;
    
    for (auto it : v) {
        sum += it;
        mx = max(mx, sum);
        if (sum < 0)
            sum = 0;
    }
    return mx;
}
```
