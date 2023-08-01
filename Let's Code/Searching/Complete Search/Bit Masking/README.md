# Bitmasking
- **Complete Search Approach**
- Try all possible answers

## Get all possible sub sequance of array v

**`Using bitset`**
```cpp
void doIt() {
    int n;
    cin >> n ;
    vector<int>v(n);
    for(auto &it:v)
        cin >> it;

    for(int i = 0; i < 1 << n; i++){
        bitset<20>b(i);
        for(int j = 0; j < n; j++){
            if (b[j])
                cout << v[j] << " ";
        }
        cout << "\n";
    }
}
```
**`Using getBit`**
```cpp
bool getBit(int num, int index){
    return (1 << index) & num;
}
void doIt() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &it : v)
        cin >> it;

    for(int i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            if (getBit(i, j))
                cout << v[j] << " ";
        }
        cout << "\n";
    }
}
```

