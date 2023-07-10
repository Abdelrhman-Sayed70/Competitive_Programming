# Row GCD
## [Row GCD | Codeforces](https://codeforces.com/contest/1458/problem/A)

## Approach [Ecludian Algorithm]
- gcd(a, b) = gcd(a - b, b). Also, we can say that gcd of array element = gcd of the array element after subtracting from all elements (except the min) min value of the array
- So `gcd(a[0] + x, a[1] + x, ..., a[n - 1] + x)` = `gcd(a[0] + x, a[1] + x - a[0] - x, ...., a[n - 1] + x - a[0] - x)`
- GCD(array elements after adding x) = **`gcd(a[0] + x, gcd(a[1] - a[0], ...., a[n - 1] - a[0])`** such that array is **sorted**

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
