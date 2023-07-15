# Number of Subsets with 0 XOR

## Solution [Bitmask]
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

    int cnt = 0;
    for(int i = 1; i < (1 << n); i++){
        int _xor = 0;
        for(int j = 0;j < n ;j++){
            if (getBit(i, j))
                _xor ^= v[j];
        }
        cnt += (_xor == 0);
    }
    cout << cnt;
}
```

## Solution [Meet In The Middle]
```cpp

```
