# Most Frequent Multiple
## [We Were Both Children | Codeforces](https://codeforces.com/contest/1850/problem/F)

## Solution
```cpp
void doIt(int tc) {
    int n;
    cin >> n;
    map<int, int>mp, count;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        mp[in]++;
    }
 
    for (auto it : mp) {
        for (int i = it.first; i <= n; i += it.first) {
            count[i] += it.second;
        }
    }
 
    int mx = 0;
    for (auto it : count)
        mx = max(mx, it.second);
 
    cout << mx << "\n";
}
```
