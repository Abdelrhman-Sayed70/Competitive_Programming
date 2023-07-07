# Sherlock and his girlfriend
## [Sherlock and his girlfriend | Codeforces](https://codeforces.com/contest/776/problem/B)

## Solution
```cpp
void doIt() {
    int n;
    cin >> n;
    if (n < 3){
        cout << 1 << "\n";
        while(n--)
            cout << 1 << " ";
        return;
    }
    vector<int>v(n, 1);
    for(ll i = 0; i < n; i++){
        if (v[i] == 1){
            for(ll j = (i + 2) * (i + 2); j - 2 < n; j += (i + 2)){
                v[j - 2] = 2;
            }
        }
    }

    cout << 2 << "\n";
    for(auto it : v)
        cout << it << " ";
}
```
