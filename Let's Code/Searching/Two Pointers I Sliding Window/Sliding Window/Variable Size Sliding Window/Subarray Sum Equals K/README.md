# Subarray Sum Equals K
## [Subarray Sum Equals K | Leetcode](https://leetcode.com/problems/subarray-sum-equals-k/)

## Solution
```cpp
void doIt() {
    int n;
    ll k;
    cin >> n >> k; 
    vector<ll>v(n), prefix(n, 0);
    for (auto& it : v)
        cin >> it;
    
    // prefix
    prefix = v;
    for (int i = 1; i < n; i++)
        prefix[i] += prefix[i - 1];

    ll ans = 0;
    map<ll, int>mp;
    for (int i = 0; i < n; i++) {
        ll val = prefix[i] - k;

        // count val so far
        ans += mp[val];
        if (prefix[i] == k)
            ans++;

        // add
        mp[prefix[i]]++;
    }
    cout << ans << "\n";
}
```

## Solution [Optimized]
```cpp
void doIt() {
    int n;
    ll k;
    cin >> n >> k; 
    vector<ll>v(n), prefix(n, 0);
    for (auto& it : v)
        cin >> it;
    
    // prefix
    prefix = v;
    for (int i = 1; i < n; i++)
        prefix[i] += prefix[i - 1];

    ll ans = 0;
    map<ll, int>mp;
    for (int i = 0; i < n; i++) {
        ll val = prefix[i] - k;

        // [TODO] count val so far [binary search]
        
    }
    cout << ans << "\n";
}
```
