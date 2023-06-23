# ☢ 2D Vector

## `Declare 2D vector`
```cpp
void print2D(vector<vector<int>>v) {
    int n = v.size(), m = v[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
void doIt() {
    int n, m; cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    print2D(v);
}  
```
## `Initialize 2D vector`
```cpp
void doIt() {
    int n, m; cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m, -1));
    print2D(v);
} 
```
