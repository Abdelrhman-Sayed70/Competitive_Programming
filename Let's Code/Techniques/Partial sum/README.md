# Partial sum
```Used in range update queries in an efficient way.```
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
