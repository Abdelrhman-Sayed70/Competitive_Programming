# Fire Again
## [Fire Again | Codeforces](https://codeforces.com/contest/35/problem/C)

## Solution
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
bool inMap(pair<int,int>point, pair<int, int>grid, int mapBase) {
    int pf = point.first, ps = point.second;
    int gf = grid.first, gs = grid.second;
    if (mapBase)
        return (pf > 0 and pf <= gf and ps > 0 and ps <= gs);
    else
        return (pf >= 0 and pf < gf and ps >= 0 and ps < gs);
}
bool visited[2005][2005];
void bfs(queue<pair<int, int>> &nextToVisit, pair<int, int> grid) {
    pair<int, int> currentPoint;
    while (nextToVisit.size()) {
        currentPoint.first = nextToVisit.front().first;
        currentPoint.second = nextToVisit.front().second;
        visited[currentPoint.first][currentPoint.second] = true;
        nextToVisit.pop();
        for (int i = 0; i < 4; i++) {
            pair<int, int> child = {currentPoint.first + dx[i], currentPoint.second + dy[i]};
            if (inMap(child, grid, 1) and !visited[child.first][child.second]) {
                visited[child.first][child.second] = 1;
                nextToVisit.push(child);
            }
        }
    }
    cout << currentPoint.first << " " << currentPoint.second << "\n";
}
void doIt() {
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    queue<pair<int, int>>q;
    while (k--){
        int a, b;
        cin >> a >> b;
        q.push({a, b});
        visited[a][b] = 1;
    }
    bfs(q, {n, m});
}
```
