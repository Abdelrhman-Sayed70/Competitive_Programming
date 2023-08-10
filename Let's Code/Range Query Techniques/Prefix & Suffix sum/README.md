# Prefix & Suffix [Cumulative] Sum
## [Range sum query | CodeForces](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y)


# `Prefix Sum`

- Gets sum from the start of the array to the position I

```c++
vector<ll>getPrefix(vector<ll>&v) {
    vector<ll> prefix = v;
    for (int i = 1; i < prefix.size(); i++) {
        prefix[i] += prefix[i - 1];
    }
    return prefix;
}
```
```cpp
int a, b; // 0 based
cin >> a >> b;
cout << (a ? prefix[b] - prefix[a - 1] : prefix[b]);
```

# `Suffix Sum`

- Gets sum from the end of the array to position I

```c++
vector<ll>getSuffix(vector<ll>&v) {
    vector<ll> suffix = v;
    for (int i = v.size() - 2; i >= 0; i--) {
        suffix[i] += suffix[i + 1];
    }
    return suffix;
}
```

# `2D Prefix Sum`
```cpp


```
