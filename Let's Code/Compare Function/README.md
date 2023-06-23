# Compare Function

## Sort array in descending order
```cpp
bool proceed(int a, int b) {
    return a > b;
}
void doIt() {
    int n; cin >> n; 
    vector<int>v = { 1,3,2 };
    for (auto& it : v)
        cin >> it;
    sort(all(v), proceed);
    out(v);
    // 3 2 1
}
```

## Sort array ascendingly regardless sign
```cpp
bool proceed(int a, int b) {
    return abs(a) < abs(b);
}
void doIt() {
    vector<int>v = { 2,7,-3,10,-99 };
    sort(all(v), proceed);
    out(v);
    // 2 -3 7 10 -99
} 
```
