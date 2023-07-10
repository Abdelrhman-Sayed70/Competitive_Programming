# Complicated GCD
## [Complicated GCD | Codeforces](https://codeforces.com/contest/664/problem/A)

## Approach
- gcd value alwayes between 1 and min(a, b)
- for at least 2 consecutive numbers the gcd equal one

## Solution
```cpp
void doIt() {
    string s, s1;
    cin >> s >> s1;
    cout << (s1 == s ? s : "1");
}
```
