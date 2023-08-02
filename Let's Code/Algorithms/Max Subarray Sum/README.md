# Max Subarray Sum

```cpp
ll maxSubArraySum(vector<ll>& v) {
    ll mx = -1e9, sum = 0;
    
    for (auto it : v) {
        sum += it;
        mx = max(mx, sum);
        if (sum < 0)
            sum = 0;
    }
    return sum;
}
```
