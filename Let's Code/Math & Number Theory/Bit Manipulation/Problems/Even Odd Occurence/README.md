# Even Odd Occurrence
## [Single Number | Leetcode](https://leetcode.com/problems/single-number/description/)

## Approach
- 0 ^ n = n
- n ^ n = 0

## Solution
```cpp
void doIt() {
    int n, in, _xor = 0;
    cin >> n;
    while(n-- and cin >> in)
        _xor ^= in;

    cout << _xor;
}
```
