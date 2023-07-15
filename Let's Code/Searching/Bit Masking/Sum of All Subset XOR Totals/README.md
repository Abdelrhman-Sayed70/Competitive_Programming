# Sum of All Subset XOR Totals
## [Sum of All Subset XOR Totals | Leetcode](https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/)

## Solution
```cpp
bool getBit(int num, int index){
    return (1 << index) & num;
}
void doIt() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &it:v)
        cin >> it;

    // bitmask on array elements 2^n
    int sum = 0;
    for(int i = 1; i < (1 << n); i++){
        int _xor =0;
        for(int j = 0; j < n; j++) {
            if (getBit(i, j))
                _xor ^= v[j];
        }
        sum += _xor;
    }
    cout << sum;
}
```
