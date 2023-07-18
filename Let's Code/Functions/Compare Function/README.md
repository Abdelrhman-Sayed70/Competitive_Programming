# Compare Function

## `Sort array in descending order`
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

## `Sort array ascendingly regardless sign`
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

## `Sort vector of struct`
```cpp
struct item {
    int weight, value;
};
bool proceed(item a, item b) {
    return a.value > b.value;
}
void doIt() {
    int n; 
    cin >> n; 
    vector<item>v(n); 
    for (auto& it : v) {
        cin >> it.value >> it.weight;
    }
    sort(all(v), proceed); // sort descendingly by value
    for (auto& it : v) {
        cout << it.value << " " << it.weight << "\n";
    }
} 
```

## `Sort vector of pair`
```cpp
bool proceed(pair<int,int>pr1, pair<int,int>pr2) {
    return pr1.second > pr2.second;
}
void doIt() {
    int n; 
    cin >> n; 
    vector<pair<int,int>>v(n); 
    for (auto& it : v) {
        cin >> it.first >> it.second; // weight, value
    }
    sort(all(v), proceed); // sort descendingly by pair.second
    for (auto it : v) {
        cout << it.first << " " << it.second << "\n";
    }
}  
```
