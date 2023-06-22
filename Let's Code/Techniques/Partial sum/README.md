# Partial [Ranged] sum
## [Karen and Coffee | Codeforces](https://codeforces.com/problemset/problem/816/b)

`Used in range update queries in an efficient way.`

## In case of array initialized by 0s

```cpp
void doIt() {
    int n; cin >> n;
    vector<int>v(n + 1, 0);
    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        v[l] += k;
        v[r + 1] -= k;
    }
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
```

## In case of user's array

```cpp
void doIt() {
    int n; cin >> n;
    vector<int>v(n), ranged(n + 1, 0);
    for (auto& it : v)
        cin >> it;

    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        ranged[l] += k;
        ranged[r + 1] -= k;
    }
    for (int i = 1; i < n; i++) {
        ranged[i] += ranged[i - 1];
    }
    for (int i = 0; i < n; i++) {
        v[i] += ranged[i];
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
```
