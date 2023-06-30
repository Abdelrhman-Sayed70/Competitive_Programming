# Find the smallest sub-arr A contains all arr B elements
## Find the smallest sub-arr A contains all arr B elements | Microsoft Intern Assessment
![Library](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/4d06876a-1d20-4ff5-8894-6ffe6bc81f7a)

## Solution
```cpp
void doIt() {
    int n, k;
    cin >> n >> k;
    
    vector<int>A(n), B(k);
    
    for (auto& it : A)
        cin >> it;
    
    map<int, bool>found;
    for (auto& it : B)
        cin >> it, found[it] = 1;
    
    // variable size sliding window
    int start = 0, end = 0, a = -1, b = -1, mn = INT_MAX, sz;
    map<int, int>mp;
    while (end < n) {
        // insert
        if (found[A[end]])
            mp[A[end]]++;

        // check and remove
        while (mp.size() == k) {
            sz = end - start + 1;
            if (sz < mn)
                mn = sz, a = start + 1, b = end + 1;
             
            if (mp.count(A[start])) {
                mp[A[start]]--;
                if (mp[A[start]] == 0)
                    mp.erase(A[start]);
            }
            start++;
        }
        end++;
    }
    cout << mn << "\n";
    cout << a << " " << b << "\n";
}
```
## Notes
- In this version of the problem we don't consider the order of found elements in array a, also array b has distinct elements
- This code can be enhanced by replacing found map with an array
