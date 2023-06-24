# Magic Powder - 1
## [Magic Powder - 1 | Codeforces](https://codeforces.com/contest/670/problem/D1)

## Approach
- it's optimizing problem which can be solved using binary search
- search space is from 0 up to maxb + maxk = 2*1e3


## Solution
```cpp
bool can(int s, vector<int>&need, vector<int>&has, int magic) {
    for (int i = 0; i < need.size(); i++) {
        int gredientNeeded = s * need[i];
        int magicNeeded = max(0, gredientNeeded - has[i]);
        magic -= magicNeeded;
        if (magic < 0)
            return false;
    }
    return true;
}
void doIt() { 
    int n, magic; 
    cin >> n >> magic; 
    vector<int>need(n), has(n);
    for (auto& it : need)
        cin >> it;
 
    for (auto& it : has)
        cin >> it;
 
    int start = 0, end = 1e5, mid, ans = 0; 
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
