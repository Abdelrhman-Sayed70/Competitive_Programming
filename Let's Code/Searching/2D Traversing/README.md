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
