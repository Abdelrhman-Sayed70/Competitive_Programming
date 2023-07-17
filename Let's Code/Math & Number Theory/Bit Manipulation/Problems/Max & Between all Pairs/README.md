# Max & Between all Pairs
## [Maximum AND Value | GeeksForGeeks]

## Approach
- iterating over bits from left to right [left has max value]
- check if 2 or more numbres have 1 in the current bit


## Solution
```cpp
bool solve(int val, vector<int>&v){
    int count = 0;
    for(auto it : v)
        count += (it & val) == val;

    return count >= 2;
}
void doIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it: v)
        cin >> it;

    ll res = 0;
    for (int i = 31; ~i; i--){
        int val = res | 1LL << i;
        if (solve(val, v))
            res = res | (1LL << i);
    }
    cout << res;
}
```
