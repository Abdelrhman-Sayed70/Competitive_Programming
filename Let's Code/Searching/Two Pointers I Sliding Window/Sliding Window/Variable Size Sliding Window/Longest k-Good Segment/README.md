# Longest k-Good Segment
## [Longest k-Good Segment | Codeforces](https://codeforces.com/contest/616/problem/D)

## Approach
- insert in the set and update the max distance till the set size become > k
- when the set size exceeds k, still remove from it till the size becomes <= k

## Solution
```cpp
void doIt() {
    int n, k;
    cin >> n >> k; 
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;
 
    // variable size sliding window
    set<int>st;
    vector<int>mp(1e6 + 5, 0);
    int start = 0, end = 0, mx = -1, sz, a = -1, b = -1;
    while (end < n) {   
        // insert
        st.insert(v[end]);
        mp[v[end]]++;
        sz = end - start + 1;
        if (st.size() <= k) {
            if (sz > mx) {
                mx = sz;
                a = start + 1, b = end + 1;
            }
        }
        // remove
        while (st.size() > k) {
            mp[v[start]]--;
            if (!mp[v[start]]) {
                st.erase(v[start]);
            }
            start++;
        }
        end++;
    }
    cout << a << " " << b;
}
```
