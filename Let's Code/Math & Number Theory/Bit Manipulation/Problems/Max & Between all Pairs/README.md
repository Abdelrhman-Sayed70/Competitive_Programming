# Max & Between all Pairs
## [Maximum AND Value | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/maximum-and-value2637/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

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
