# Knapsack

## [Knapsack | Codeforces](https://codeforces.com/group/gA8A93jony/contest/270592/problem/J)

## Solution
```cpp
int solve(int i, int curVal, int remW, vector<pair<int, int>>& items) {
    if (i == items.size() or !remW) {
        return curVal;
    }

    int take = -1;
    if (remW >= items[i].first)
        take = solve(i + 1, curVal + items[i].second, remW - items[i].first, items);

    int leave = solve(i + 1, curVal, remW, items);

    return max(take, leave);
}
void doIt() {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>>items(n); // w, v
    for (auto& it : items)
        cin >> it.first >> it.second;

    int maxV = solve(0, 0, w, items);
    cout << maxV;
}
```
