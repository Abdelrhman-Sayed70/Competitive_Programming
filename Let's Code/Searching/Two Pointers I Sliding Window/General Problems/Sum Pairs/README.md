# Sum Pairs
## Description
**Given an array of n numbers find number of pairs that their summation equal to x in `O(N)`**

## `Array Elements are Unique`
```cpp
void doIt() { 
    int n; 
    cin >> n; 
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    sort(all(v));
    
    int x; cin >> x; 
    int start = 0, end = v.size() - 1, cntPairs = 0;
    while (start < end) {
        int sum = v[start] + v[end];
        if (sum == x) {
            cntPairs++;
            end--;
        }
        else if (sum > x) {
            end--;
        }
        else if (sum < x) {
            start++;
        }
    }
    cout << cntPairs;
}
```

## `Array can have Duplicates`
```cpp

```
