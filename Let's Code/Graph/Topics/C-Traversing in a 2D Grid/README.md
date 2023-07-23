# Traversing in a 2D Grid
![image](https://user-images.githubusercontent.com/99830416/233385168-a2677c80-264f-4cad-985c-cbfe0ea4d1ce.png)

- Let’s take the above grid as an example, if you are standing on point (3,2) you can move to the following four points, (3,1), (3,3), (2,2), (4,2).
- So, if you are on point (i,j), you can move to (i - 1, j), (i + 1, j), (i, j + 1), (i, j - 1), but first you need to check if the point you are traversing to is in _**borders**_.

## Validate Points
```cpp
bool inMap(pair<int,int>point, pair<int, int>grid, int mapBase) {
    int pf = point.first, ps = point.second;
    int gf = grid.first, gs = grid.second;
    if (mapBase)
        return (pf >= 1 and pf <= gf and ps >= 1 and ps <= gs);
    else
        return (pf >= 0 and pf < gf and ps >= 0 and ps < gs);
}
```

## Neighbors
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
```
For **Backtracking** The Path
```cpp
char dir[] = {'U', 'D', 'L', 'R'};
```

## BFS
```cpp
bool visited[1005][1005];
vector<char>path;
bool bfs(pair<int, int>source, pair<int, int> destination, vector<vector<char>>&graph,vector<vector<pair<int, int>>>&parent ,pair<int, int> gridSize) {
    queue<pair<int, int>> nextToVisit;
    nextToVisit.push(source);
    parent[source.first][source.second] = {-1, -1};
    pair<int, int> currentPoint;
    while (nextToVisit.size()) {
        currentPoint = nextToVisit.front();
        nextToVisit.pop();
        if (currentPoint == destination){
            path = getPath(destination, source, parent);
            return true;
        }
        visited[currentPoint.first][currentPoint.second] = true;
        for (int i = 0; i < 4; i++) {
            pair<int, int> child = {currentPoint.first + dx[i], currentPoint.second + dy[i]};
            if (inMap(child, gridSize, 0) and graph[child.first][child.second] != '#' and !visited[child.first][child.second]) {
                visited[child.first][child.second] = 1;
                parent[child.first][child.second] = currentPoint;
                nextToVisit.push(child);
            }
        }
    }
    return false;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>>grid(n, vector<char>(m));
    pair<int, int>source, destinations;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                source = {i, j};
            if (grid[i][j] == 'B')
                destinations = {i, j};
        }
    }
    vector<vector<pair<int, int>>>parent(n, vector<pair<int, int>>(m));
    bool reachable = bfs(source, destinations, grid, parent, {n, m});
    cout << (reachable ? "YES\n" : "NO\n");
    if (path.size()){
        cout << path.size() << "\n";
        for(auto it : path){
            cout << it;
        }
    }
}
```

## Get Path
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
char dir[] = {'U', 'D', 'L', 'R'}; // For backtracking the Path
vector<char> getPath(pair<int, int> destination ,pair<int, int>source ,vector<vector<pair<int, int>>>&parent) {
    vector<char> path;
    while(destination != source){
        char direction;
        pair<int, int>checkPoint;
        for(int i = 0; i < 4; i++){
            checkPoint = {destination.first + dx[i], destination.second + dy[i]};
            if (checkPoint == parent[destination.first][destination.second]){
                direction = dir[i];
                break;
            }
        }
        path.push_back(direction);
        destination = parent[destination.first][destination.second];
    }
    reverse(all(path));
    return path;
}

```

## More Than 1 Entry Point
**`Visit those points` `before` `entering traversal algorithm`**
```cpp
int numOfEntryPoints;
queue<pair<int, int>>q;
while (numOfEntryPoints--){
    int a, b;
    cin >> a >> b;
    q.push({a, b});
    visited[a][b] = 1;
}
bfs(q, {n, m});
```

