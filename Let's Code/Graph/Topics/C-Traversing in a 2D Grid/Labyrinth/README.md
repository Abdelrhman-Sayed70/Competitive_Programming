# Labyrinth
## [Labyrinth | CSES](https://cses.fi/problemset/task/1193)

## Solution
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
char dir[] = {'U', 'D', 'L', 'R'};
bool inMap(pair<int,int>point, pair<int, int>grid, int mapBase) {
    int pf = point.first, ps = point.second;
    int gf = grid.first, gs = grid.second;
    if (mapBase)
        return (pf >= 1 and pf <= gf and ps >= 1 and ps <= gs);
    else
        return (pf >= 0 and pf < gf and ps >= 0 and ps < gs);
}
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
