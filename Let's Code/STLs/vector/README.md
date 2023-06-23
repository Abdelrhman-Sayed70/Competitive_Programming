# Vector

## `Create and fill vector`

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
