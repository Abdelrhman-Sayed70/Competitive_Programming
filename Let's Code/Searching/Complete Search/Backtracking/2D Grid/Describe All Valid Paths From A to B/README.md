# Describe All Valid Paths From A to B
![image](https://user-images.githubusercontent.com/99830416/236564105-bc55224e-5067-45ba-a5ee-6d8aefc298b5.png)

# `Problem 1`
**Print all valid paths from the start to the end of the grid**
```cpp
void traverse(int i, int j, int n, int m, vector<vector<char>>& grid, string path) {
    if (i == n - 1 and j == m - 1) {
        cout << path << "\n";
        return;
    }
    
    // go right R
    if (j + 1 < m and grid[i][j + 1] != '#')
        traverse(i, j + 1, n, m, grid, path + 'R');

    // go down D
    if (i + 1 < n and grid[i + 1][j] != '#')
        traverse(i + 1, j, n, m, grid, path + 'D');
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>>grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    traverse(0, 0, n, m, grid, "");
}
```
`Another Solution of Backtrack`
```cpp
int n, m; 
string path;
void generatePaths(int i, int j, vector<vector<char>>grid) {
    if (i == n - 1 and j == m - 1) {
        cout << path << "\n";
        return;
    }
     
    if (j + 1 < m and grid[i][j + 1] != '#') {
        path += 'R';
        generatePaths(i, j + 1, grid);
        path.pop_back();
    }
    if (i + 1 < n and grid[i + 1][j] != '#') {
        path += 'D';
        generatePaths(i + 1, j, grid);
        path.pop_back();
    }
}
int main() {
    cin >> n >> m;
    vector<vector<char>> V(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> V[i][j];
        }
    }
    generatePaths(0, 0, V);
}
```

### Test Cases
```
4 4
. . # .
. . . .
. . # .
. . # .
```
```
RDRRDD
DRRRDD
```

```
4 4
. . # .
. . . .
. # . .
. . # .
```
```
RDRRDD
RDRDRD
DRRRDD
DRRDRD
```





# Solution 3
```cpp
int traverse(int i, int j, int n, int m, vector<vector<char>>& grid, string path) {
    if (i == n - 1 and j == m - 1) {
        cout << path << "\n";
        return 1;
    }

    int cnt = 0;

    // go right R
    if (j + 1 < m and grid[i][j + 1] != '#')
        cnt += traverse(i, j + 1, n, m, grid, path + 'R');

    // go down D
    if (i + 1 < n and grid[i + 1][j] != '#')
        cnt += traverse(i + 1, j, n, m, grid, path + 'D');

    return cnt;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>>grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int cnt = traverse(0, 0, n, m, grid, "");
    cout << cnt;
}
```




## Conclusion
**The path alwayes will contains `m - 1` R and `n - 1` D**
