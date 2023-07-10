# Maximum GCD of Pair from 1 to N
## [Maximum GCD of Pair from 1 to N | Codeforces](https://codeforces.com/contest/1370/problem/A)

## Solution
```cpp
void doIt() {
    int n;
    cin >> n;
    if (n & 1)
        n--;
    cout << n / 2 << "\n";
}
```
