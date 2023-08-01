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



# `Problem 2`
**From 2D Integer array print all paths from (0, 0) to (n - 1, m - 1)**
[Generating the paths | Codeforces](https://codeforces.com/group/gA8A93jony/contest/270592/problem/N)
```cpp
vector<int>path;
set<vector<int>>ans;
void traverse(int i, int j, int n, int m, vector<vector<int>>& grid) {
    path.push_back(grid[i][j]);
    if (i == n - 1 and j == m - 1) {
        ans.insert(path);
        return;
    }
 
    // Down
    if (i + 1 < n) {
        traverse(i + 1, j, n, m, grid);
        path.pop_back();
    }
 
    // Right
    if (j + 1 < m) {
        traverse(i, j + 1, n, m, grid);
        path.pop_back();
    }
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
 
    traverse(0, 0, n, m, grid);
    for (auto it : ans) {
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "\n";
    }
}
```



# `Problem 3`
**Count all valid paths from start to end**
[The number of paths in grid | Codeforces](https://codeforces.com/group/gA8A93jony/contest/270592/problem/O)

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
