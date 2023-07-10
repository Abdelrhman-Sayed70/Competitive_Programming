# Max-Min GCD of any Sequence

## Description
Given an array of size n, get the max and min gcd of any sub-sequence of the array
## Solution
```cpp
void doIt() {
    int n, mx = -1, in, g = 0;
    cin >> n;
    while (n--)
        cin >> in, mx = max(mx, in), g = __gcd(g, in);

    cout << "max gcd: " << mx << ", min gcd: " << g;
}
```
