# Permutations

```cpp
bool isPermutation(vector<ll>v){
    int n = v.size();
    for(auto it : v){
        if (it < 1 or it > n)
            return false;
    }
    set<ll>st(v.begin(), v.end());
    return st.size() == n;
}
```
