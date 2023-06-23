# Pair
## `Create simple pair`
```cpp
pair<string, int>pr; 
pr.first = "gaber", pr.second = 1;
```
## `Vector of pair`
```cpp
int n; cin >> n;
vector<pair<int, int>>v(n);
for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
}
sort(all(v)); // sort based on first item of the pair
for (auto it : v) {
    cout << it.first << " " << it.second << "\n";
}
```
