# Number of Subsets with 0 XOR
## [Zero Xor | Hacker Earth](https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/zero-xor-e3085486/)

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
`For array size reaches 40`
- Solve right half [max n = 20]. count number of subsequences with 0 xor and store also the frequency of XORs
- Solve left half [max n = 20]. count number of subsequences with 0 xor and add to the answer the freq[XOR]
```cpp
bool getBit(int num, int index){
    return (1 << index) & num;
}
void doIt() {
    int n;
    cin >> n;
    vector<ll>v(n);
    for(auto &it:v)
        cin >> it;

    int leftHalf = n / 2, rightHalf = n - leftHalf;
    ll ans = 0;
    map<ll, int>mp;
    // solve right half
    for(int i = 1; i < 1 << rightHalf; i++){
        ll _xor = 0;
        for(int j = 0; j < rightHalf; j++){
            if (getBit(i, j)){
                _xor ^= v[j + leftHalf];
            }
        }
        mp[_xor]++;
        if (!_xor)
            ans++;
    }

    // solve left half
    for(int i = 1; i < 1 << leftHalf; i++){
        ll _xor = 0;
        for(int j = 0; j < leftHalf; j++){
            if (getBit(i, j)){
                _xor ^= v[j];
            }
        }
        ans += mp[_xor];
        if (!_xor)
            ans++;
    }
    cout << ans;
}
```
