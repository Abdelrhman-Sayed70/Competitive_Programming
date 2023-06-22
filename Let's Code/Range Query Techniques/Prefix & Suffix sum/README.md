# Prefix & Suffix [Cumulative] Sum
## [Range sum query | CodeForces](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y)


# `Prefix Sum`

- Gets sum from the start of the array to the position I

```c++
void doIt() {
    int n; cin >> n;
    vector<int>v(n), prefix(n);
    for (auto &it : v) { cin >> it; }
    prefix = v;
    for (int i = 1; i < n; i++) {
        prefix[i] += prefix[i - 1];
    }
    // sum from index a to b [1-based]
    int a, b;
    cin >> a >> b;
    a--; b--;
    if (a)
        cout << prefix[b] - prefix[a - 1];
    else
        cout << prefix[b];
}
```

# `Suffix Sum`

- Gets sum from the end of the array to position I

```c++
void doIt() {
    int n; cin >> n;
    vector<int>v(n), suffix(n);
    for (auto &it : v) { cin >> it; }
    suffix = v;
    for (int i = n-2; i >= 0; i--) {
        suffix[i] += suffix[i + 1];
    }
    // a is 1-based
    int a;
    cin >> a;
    a--;
    cout << suffix[a];
}
```
