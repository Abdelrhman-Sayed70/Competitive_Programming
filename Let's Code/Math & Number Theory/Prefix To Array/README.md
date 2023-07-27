# Prefix To Array

```cpp
vector<ll>prefixToArray(vector<ll>prefix){
    int n = prefix.size();
    vector<ll>v(n);
    v[0] = prefix[0];
    for(int i = n - 1; i > 0; i--){
        v[i] = prefix[i] - prefix[i - 1];
    }
    return v;
}
```
