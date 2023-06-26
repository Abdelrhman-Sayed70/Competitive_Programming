# Minimum Size Subarray Sum

## [Minimum Size Subarray Sum | Leetcode](https://leetcode.com/problems/minimum-size-subarray-sum/)

## Solution
```cpp
void doIt() { 
    int n, target;
    cin >> n;
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    cin >> target;
    int start = 0, end = 0, mn = INT_MAX, sum = 0;
    while (end < n) {
        sum += v[end];
        if (sum >= target) {
            while (sum >= target) {
                sum -= v[start];
                start++;
            }
            mn = min(mn, end - start + 2);
        }
        end++;
    }
    mn = (mn == INT_MAX ? 0 : mn);
    cout << mn;
}
```
