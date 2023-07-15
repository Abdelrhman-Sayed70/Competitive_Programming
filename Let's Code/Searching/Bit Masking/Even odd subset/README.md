# Even odd subset
## [Even odd subset | Codeforces](httpscodeforces.comgroupc3FDl9EUi9contest267312problemE)

## Solution
```cpp
void doIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v)
        cin >> i;
    ll ans = 0;
    for (int i = 1; i < 1 << n; i++) {
        bitset<32> b(i);
        int odd = 0, even = 0;
        for (int j = 0; j < n; j++) {
            if (b[j]) {
                v[j] & 1 ? odd++ : even++;
            }
        }
        ans += (even > odd);
    }
    cout << ans;
}
```