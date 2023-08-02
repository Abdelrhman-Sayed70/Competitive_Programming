# Matrix Multiplication
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            ans[i][j] += v1[i][k] * v2[k][j];
        }
    }
}
```
