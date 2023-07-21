# Multiples

```cpp
void doIt(){
    int n, mx;
    cin >> n >> mx;
    // generate multiples of n till mx
    for(int i = n; i <= mx; i += n){
        cout << i << " ";
    }
}
```

## Get multiples for each element in array
- Put them on a map to avoid repeated elements, also `it.second` can be used in the problem
```cpp
void doIt() {
    int n;
    cin >> n;
    vector<ll>v(n);
    map<ll, int>mp, freq;
    for (auto &it: v) {
        cin >> it;
        mp[it]++;
    }
    for(auto it : mp){
        cout << "Muiltiples of " << it.first << ": ";
        for(ll i = it.first; i <= n; i += it.first)
            cout << i << " ";
        cout << "\n";
    }
}
```
