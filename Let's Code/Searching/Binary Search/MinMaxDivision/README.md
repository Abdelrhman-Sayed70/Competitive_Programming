# MinMaxDivision
## [MinMaxDivision | Codility](https://app.codility.com/programmers/lessons/14-binary_search_algorithm/min_max_division/)

## Approach
- It is an optimization problem that can be solved using binary search.
- Search space is from min to max sum. min-sum = 0, max-sum = 1e5 * 1e4 = 1e9
- Binary search in this space and check if we can divide the array into k blocks with sum <= mid for each block
- If can? we should try a smaller mid. else we should try a bigger mid.
- You must do a monotonic check, make sure that the search space will give a monotonic answer
- CAN function is usually greedy

## Solution
```cpp
bool can(ll s, int k, vector<int>&v) {
    ll sum = 0, blocks = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > s)
            return false;

        if (sum + v[i] <= s) {
            sum += v[i];
        }
        else {
            sum = 0;
            blocks++;
            i--;
        }
    }
    return (blocks <= k);
}
void doIt() { 
    int n;
    cin >> n; 
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    int k;
    cin >> k;
    int start = 0, end = 1e9 + 5, mid, ans = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (can(mid, k, v)) {
            end = mid - 1;
            ans = mid;
        }
        else {
            start = mid + 1;
        }
    }
    cout << ans;
}
```
