# Traversing in a 2D Grid
![image](https://user-images.githubusercontent.com/99830416/233385168-a2677c80-264f-4cad-985c-cbfe0ea4d1ce.png)

- Let’s take the above grid as an example, if you are standing on point (3,2) you can move to the following four points, (3,1), (3,3), (2,2), (4,2).
- So, if you are on point (i,j), you can move to (i - 1, j), (i + 1, j), (i, j + 1), (i, j - 1), but first you need to check if the point you are traversing to is in _**borders**_.

## Traversing Points
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };

for (int i = 0; i < 4; i++) {
    pair<int, int> child = {currentPoint.first + dx[i], currentPoint.second + dy[i]};
    if (inMap(child, grid, 1) and !visited[child.first][child.second]) {
        visited[child.first][child.second] = 1;
        nextToVisit.push(child);
    }
}
```
## Validate Point
```cpp
bool inMap(pair<int,int>point, pair<int, int>grid, int mapBase) {
    int pf = point.first, ps = point.second;
    int gf = grid.first, gs = grid.second;
    if (mapBase)
        return (pf > 0 and pf <= gf and ps > 0 and ps <= gs);
    else
        return (pf >= 0 and pf < gf and ps >= 0 and ps < gs);
}
```

## More 1 Entry Point
**`Visit` Those Points `before` `entering traversal algorithm`**
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
