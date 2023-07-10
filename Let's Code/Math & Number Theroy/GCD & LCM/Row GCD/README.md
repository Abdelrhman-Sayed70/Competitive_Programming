# Row GCD
## [Row GCD | Codeforces](https://codeforces.com/contest/1458/problem/A)

## Approach


## Solution 
```cpp
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<ll>A(n), B(m);
    for(auto &it:A)
        cin >> it;
    for(auto &it:B)
        cin >> it;

    sort(all(A));
    ll G = 0;
    for(int i = 1; i < n; i++){
        G = __gcd(G, A[i] - A[0]);
    }
    for(int i = 0; i < m; i++){
        cout << __gcd(G, A[0] + B[i]) << " ";
    }
}
```
