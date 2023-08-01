# Apple Division
## [Apple Division | CSES](https://cses.fi/problemset/task/1623/)

## Solution
```cpp
void doIt() {
    int n;
    cin >> n; 
    vector<ll>v(n);
    for (auto& it : v)
        cin >> it;
    
    ll mn = 21 * 1e9;
    for (int i = 0; i < (1 << n); i++) {
        bitset<30>b(i);
        ll s1 = 0, s2 = 0;
        for (int j = 0; j < n; j++) {
            if (b[j])
                s1 += v[j];
            else
                s2 += v[j];
        }
        mn = min(abs(s1 - s2), mn);
    }
    cout << mn;
}
```
