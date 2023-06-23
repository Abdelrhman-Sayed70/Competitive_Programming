# Vector

# `Create and fill vector`

#### Create vector with no initiale size
```cpp
vector<int>v;
int n;
cin >> n;
for (int i = 0; i < n; i++) {
    int in; cin >> in; 
    v.push_back(in);
}
```
#### `Create vector with initial size`
```cpp
int n;
cin >> n;
vector<int>v(n);
for (int i = 0; i < n; i++) {
    cin >> v[i];
}
// or
for (auto& it : v) {
    cin >> it; 
}
```

# `Initialize vector`
```cpp
int n;
cin >> n;
vector<int>v(n, -1); // array if size n initialized with -1
```
```cpp
vector<int>V = { 1,2,3,4,5 };
```
# `Erase`
#### Erase one element `v.erase(address)`
```cpp
vector<int> V = { 1,2,3,4,5 };
V.erase(V.begin() + 1); // erase v[1]
for (auto it : V) {
    cout << it << " ";
}
// 1 3 4 5
```
#### Erase range `v.erase(start_add, end_add + 1)`
```cpp
vector<int>V = { 1,2,3,4,5 };
V.erase(V.begin() + 0, V.begin() + 4); // remove from index 0 to index 3
for (auto it : V) {
    cout << it << " ";
}
// 5
```

# `Remove duplicates`
```cpp
int n; cin >> n;
vector<ll>v(n);
for (auto& i : v) { cin >> i; }
sort(v.begin(), v.end());
// arr must be sorted
v.erase(unique(v.begin(), v.end()), v.end());
```

# `Sub-vector`
```cpp

```

# `Clear & Empty`
```cpp

```
