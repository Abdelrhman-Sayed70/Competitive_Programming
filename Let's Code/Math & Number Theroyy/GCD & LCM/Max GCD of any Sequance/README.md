# Max GCD of any Sequence

## Description
Given an array of size n, get the max gcd of any sub-sequence of the array
## Solution
```cpp
void doIt(){
    int n, mx = -1, in;
    cin >> n;
    while(n--)
        cin >> in, mx = max(mx, in);

    cout << mx;
}
```
