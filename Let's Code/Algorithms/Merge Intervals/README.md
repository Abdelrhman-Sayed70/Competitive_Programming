# Merge Intervals
## [Merge Intervals | Leetcode](https://leetcode.com/problems/merge-intervals/description/)

```cpp
vector<pair<int, int>> mergeIntervals(vector<pair<int, int>>&v) {
    int n = v.size();
    sort(all(v));
    
    vector<pair<int, int>>mergedIntervals;
    int a = v[0].first, b = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first <= b) {
            b = max(b, v[i].second);
        }
        else {
            mergedIntervals.push_back({ a,b });
            a = v[i].first, b = v[i].second;
        }
    }
    mergedIntervals.push_back({ a,b });
    
    return mergedIntervals;
}
void doIt() {
    int n;
    cin >> n;
    vector<pair<int, int>>v(n), mergedIntervals;
    for (auto &it : v) {
        cin >> it.first >> it.second; 
    }
    
    mergedIntervals = mergeIntervals(v);
    for (auto it : mergedIntervals) {
        cout << it.first << " " << it.second << "\n";
    }
}
```
