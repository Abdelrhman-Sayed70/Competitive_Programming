# Magic Powder - 2
## [Magic Powder - 2 | Codeforces](https://codeforces.com/contest/670/problem/D2)

## Approach
- it's optimizing problem which can be solved using binary search
- search space is from 0 up to maxb + maxk = 2*1e9
- can function gives monotonic output [.. 1 1 1 1 0 0 0 0 ...]

## Solution
```cpp
bool can(ll s, vector<ll>&need, vector<ll>&has, ll magic) {
    for (int i = 0; i < need.size(); i++) {
        ll gredientNeeded = s * (need[i]);
        ll magicNeeded = max(0*1LL, gredientNeeded - (has[i]));
        magic -= magicNeeded;
        if (magic < 0)
            return false;
    }
    return true;
}
void doIt() { 
    ll n, magic; 
    cin >> n >> magic; 
    vector<ll>need(n), has(n);
    for (auto& it : need)
        cin >> it;

    for (auto& it : has)
        cin >> it;

    ll start = 0, end = 2*1e9 + 5, mid, ans = 0; 
    while (start <= end) {
        mid = (start + end) / 2;
        if (can(mid, need, has, magic)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << ans;
}
```
