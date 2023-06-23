# Max In Ranges
## Max In Ranges | Orange internship filtration contest
**Given an array of size n and integer k. you are asked to get the max number in each range of size k in the given array**

## Testcases
```
8 3
5 3 1 2 7 2 7 3
out
5 3 7 7 7 7

5 3
1 2 3 4 5
out
3 4 5
```

## Solution
```cpp
void doIt() {
    int n, k; 
    cin >> n >> k;
    vector<int>v(n); 
    for (auto& it : v)
        cin >> it;

    multiset<int>ms;
    for (int i = 0; i < k; i++) {
        ms.insert(v[i]);
    }
    cout << *ms.rbegin() << " ";
    int indexToRemove = 0;
    for (int i = k; i < n; i++) {
        auto it = ms.find(v[indexToRemove]);
        ms.erase(it);

        ms.insert(v[i]);
        
        cout << *ms.rbegin() << " ";
        indexToRemove++;
    }
}
```
