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

# 2D Traversing

## `2D Traversing Row by Row`
```cpp
void doIt() {
    int n = 2, m = 3;
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
```

## `2D Traversing Column by Column`
```cpp
void doIt() {
    int n = 2, m = 3;
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}
```

## `2D Traversing Diagonal`
**Square 2D `rows = columns`**
```cpp
void doIt() {
    int n = 3, m = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Diagonal 1\n";
    for(int i = 0; i < n; i++){
        cout << arr[i][i] << " ";
    }

    cout << "\nDiagonal 2\n";
    for(int i = 0; i < n; i++){
        cout << arr[i][n - 1 - i] << " ";
    }
}

```

