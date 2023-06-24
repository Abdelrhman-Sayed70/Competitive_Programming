# Books
## [Books | Codeforces](https://codeforces.com/contest/279/problem/B)
## Solution
```cpp
void doIt() { 
    int n, k;
    cin >> n >> k; 
    vector<int>v(n);
    
    for (auto& it : v)
        cin >> it;

    for (int i = 1; i < n; i++)
        v[i] += v[i - 1];

    int mx = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] <= k)
            mx = max(mx, i + 1);

        else {
            int val = v[i] - k;
            auto it = lower_bound(v.begin(), v.begin() + i, val);
            int index = it - v.begin();
            mx = max(mx, i - index);
        }
    }
    cout << mx;
}
```
